/*!
 * @file integral-sequence.class.test-case.h++
 */

#ifndef TEST__INCLUDE__FIZZ_BUZZXX__INTEGRAL_SEQUENCE_CLASS_TEST_CASE_HXX
#define TEST__INCLUDE__FIZZ_BUZZXX__INTEGRAL_SEQUENCE_CLASS_TEST_CASE_HXX

#include <fizz-buzz++/integral-sequence.class.h++>

#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(namespace__fizz_buzzxx)

using namespace fizz_buzzxx;

BOOST_AUTO_TEST_SUITE(class__IntegralSequence)

/*!
 * テストパターン :
 * @c IntegralSequence を @c IntegralSequenceIterator と共に使用する
 *
 * @see fizz_buzzxx::IntegralSequence
 * @see fizz_buzzxx::IntegralSequenceIterator
 */
BOOST_AUTO_TEST_CASE(with_IntegralSequenceIterator)
{
    // 0 ～ 9 の整数の並びを表現するコンテナを生成する
    IntegralSequence const integra_lsequence { 0, 9 };

    // コンテナの先頭の整数を参照するイテレータ first を生成する
    IntegralSequenceIterator first = integra_lsequence.begin();

    // コンテナの末尾の整数 + 1 を参照するイテレータ last を生成する
    IntegralSequenceIterator const last = integra_lsequence.end();

    // 【検証】
    // イテレータ first は整数 0 を参照し, イテレータ last は整数 10 を参照すること.
    // イテレータ first とイテレータ last は等価ではないと判定されること.
    // clang-format off
    BOOST_CHECK(*first ==  0);
    BOOST_CHECK(*last  == 10);
    BOOST_CHECK(first != last);
    // clang-format on

    // 【検証】
    // インクリメント(前置)したイテレータ first が整数 1 を参照すること
    BOOST_CHECK(*(++first) == 1);

    // 【検証】
    // インクリメント(後置)したイテレータ first が整数 1 を参照したままであること.
    // また, 次の文ではイテレータ first が整数 2 を参照していること.
    // clang-format off
    BOOST_CHECK(*(first++) == 1);
    BOOST_CHECK(*    first == 2);
    // clang-format on

    // 【検証】
    // std::next で次に進めたイテレータ first が整数 3 を参照すること
    first = std::next(first);
    BOOST_CHECK(*first == 3);

    // 【検証】
    // std::advance で 6 回進めたイテレータ first が整数 9 を参照すること
    // (整数 9 はコンテナの末尾の整数でもある)
    std::advance(first, 6);
    BOOST_CHECK(*first == 9);

    // 【検証】
    // さらにインクリメントしたイテレータ first が整数 10 を参照すること.
    // イテレータ first とイテレータ last は等価であると判定されること.
    // (整数 10 はコンテナの末尾の整数 + 1 である)
    ++first;
    // clang-format off
    BOOST_CHECK(*first == 10);
    BOOST_CHECK(*last  == 10);
    BOOST_CHECK(first == last);
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* class__IntegralSequence */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__INTEGRAL_SEQUENCE_CLASS_TEST_CASE_HXX */
