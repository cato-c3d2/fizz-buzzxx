/*!
 * @file fizz-buzz-sequence.class.test-case.h++
 */

#ifndef TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_SEQUENCE_CLASS_TEST_CASE_HXX
#define TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_SEQUENCE_CLASS_TEST_CASE_HXX

#include <fizz-buzz++/fizz-buzz-sequence.class.h++>

BOOST_AUTO_TEST_SUITE(namespace__fizz_buzzxx)

using namespace fizz_buzzxx;

BOOST_AUTO_TEST_SUITE(class__FizzBuzzSequence)

/*!
 * テストパターン :
 * @c FizzBuzzSequence を @c FizzBuzzSequence::Iterator 及び
 * @c FizzBuzzSequenceElement と共に使用する
 *
 * @see fizz_buzzxx::FizzBuzzSequence
 * @see fizz_buzzxx::FizzBuzzSequenceElement
 * @see fizz_buzzxx::FizzBuzzSequence::Iterator
 */
BOOST_AUTO_TEST_CASE(with_IntegralSequenceIterator)
{
    // 整数 0 ～ 9 を対象とする FizzBuzz 演算のシーケンスコンテナを生成する
    const FizzBuzzSequence fizz_buzz_sequence = { 0, 9 };

    // シーケンスコンテナの先頭の要素を参照するイテレータ first を生成する
    FizzBuzzSequence::Iterator first = fizz_buzz_sequence.begin();

    // シーケンスコンテナの末尾の次の要素を参照するイテレータ last を生成する
    const FizzBuzzSequence::Iterator last = fizz_buzz_sequence.end();

    // 【検証】
    // イテレータ first は整数 0 を保持する FizzBuzzSequenceElement を参照し,
    // イテレータ last は整数 10 を保持する FizzBuzzSequenceElement を参照すること.
    // イテレータ first とイテレータ last は等価ではないと判定されること.
    // clang-format off
    BOOST_CHECK(*first == FizzBuzzSequenceElement( 0));
    BOOST_CHECK(*last  == FizzBuzzSequenceElement(10));
    BOOST_CHECK( first != last);
    // clang-format on

    // 【検証】
    // インクリメント(前置)したイテレータ first が
    // 整数 1 を保持する FizzBuzzSequenceElement を参照すること.
    BOOST_CHECK(*(++first) == FizzBuzzSequenceElement(1));

    // 【検証】
    // インクリメント(後置)したイテレータ first が
    // 整数 1 を保持する FizzBuzzSequenceElement を参照したままであること.
    // また, 次の文ではイテレータ first が
    // 整数 2 を保持する FizzBuzzSequenceElement を参照していること.
    // clang-format off
    BOOST_CHECK(*(first++) == FizzBuzzSequenceElement(1));
    BOOST_CHECK(*    first == FizzBuzzSequenceElement(2));
    // clang-format on

    // 【検証】
    // std::next で次に進めたイテレータ first が
    // 整数 3 を保持する FizzBuzzSequenceElementを参照すること.
    first = std::next(first);
    BOOST_CHECK(*first == FizzBuzzSequenceElement(3));

    // 【検証】
    // std::advance で 6 回進めたイテレータ first が
    // 整数 9 を保持する FizzBuzzSequenceElementを参照すること.
    // (整数 9 はコンテナの末尾の整数でもある)
    std::advance(first, 6);
    BOOST_CHECK(*first == FizzBuzzSequenceElement(9));

    // 【検証】
    // さらにインクリメントしたイテレータ first が
    // 整数 10 を保持する FizzBuzzSequenceElementを参照すること.
    // イテレータ first とイテレータ last は等価であると判定されること.
    // (整数 10 はコンテナの末尾の整数 + 1 である)
    ++first;
    // clang-format off
    BOOST_CHECK(*first == FizzBuzzSequenceElement(10));
    BOOST_CHECK(*last  == FizzBuzzSequenceElement(10));
    BOOST_CHECK(first == last);
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* class__FizzBuzzSequence */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_SEQUENCE_CLASS_TEST_CASE_HXX */
