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
 * @c FizzBuzzSequence::Element と共に使用する
 *
 * @see fizz_buzzxx::FizzBuzzSequence
 * @see fizz_buzzxx::FizzBuzzSequence::Element
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
    // イテレータ first は整数 0 を保持する FizzBuzzSequence::Element を参照し,
    // イテレータ last は整数 10 を保持する FizzBuzzSequence::Element を参照すること.
    // イテレータ first とイテレータ last は等価ではないと判定されること.
    // clang-format off
    BOOST_CHECK(*first == FizzBuzzSequence::Element( 0));
    BOOST_CHECK(*last  == FizzBuzzSequence::Element(10));
    BOOST_CHECK( first != last);
    // clang-format on

    // 【検証】
    // インクリメント(前置)したイテレータ first が
    // 整数 1 を保持する FizzBuzzSequence::Element を参照すること.
    BOOST_CHECK(*(++first) == FizzBuzzSequence::Element(1));

    // 【検証】
    // インクリメント(後置)したイテレータ first が
    // 整数 1 を保持する FizzBuzzSequence::Element を参照したままであること.
    // また, 次の文ではイテレータ first が
    // 整数 2 を保持する FizzBuzzSequence::Element を参照していること.
    // clang-format off
    BOOST_CHECK(*(first++) == FizzBuzzSequence::Element(1));
    BOOST_CHECK(*    first == FizzBuzzSequence::Element(2));
    // clang-format on

    // 【検証】
    // std::next で次に進めたイテレータ first が
    // 整数 3 を保持する FizzBuzzSequenceElementを参照すること.
    first = std::next(first);
    BOOST_CHECK(*first == FizzBuzzSequence::Element(3));

    // 【検証】
    // std::advance で 6 回進めたイテレータ first が
    // 整数 9 を保持する FizzBuzzSequenceElementを参照すること.
    // (整数 9 はコンテナの末尾の整数でもある)
    std::advance(first, 6);
    BOOST_CHECK(*first == FizzBuzzSequence::Element(9));

    // 【検証】
    // さらにインクリメントしたイテレータ first が
    // 整数 10 を保持する FizzBuzzSequenceElementを参照すること.
    // イテレータ first とイテレータ last は等価であると判定されること.
    // (整数 10 はコンテナの末尾の整数 + 1 である)
    ++first;
    // clang-format off
    BOOST_CHECK(*first == FizzBuzzSequence::Element(10));
    BOOST_CHECK(*last  == FizzBuzzSequence::Element(10));
    BOOST_CHECK(first == last);
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* class__FizzBuzzSequence */)

BOOST_AUTO_TEST_SUITE(class__FizzBuzzSequenceElement)

/*!
 * テストパターン :
 * @c FizzBuzzSequence::Element のオブジェクトを生成し,
 * インクリメント演算とストリーム出力演算を繰り返す
 *
 * @see fizz_buzzxx::FizzBuzzSequence::Element
 * @see fizz_buzzxx::FizzBuzzSequence::Element::operator++()
 * @see operator<<(std::ostream &, fizz_buzzxx::FizzBuzzSequence::Element &)
 */
BOOST_AUTO_TEST_CASE(increment_operator_and_output_stream_operator)
{
    // 被除数の初期値として 1 を指定した
    // FizzBuzzSequence::Element のオブジェクトを生成する.
    FizzBuzzSequence::Element fizz_buzz { 1 };

    // FizzBuzzSequence::Element のオブジェクトに対して
    // インクリメントとストリーム出力(FizzBuzz 演算)を 15 回ほど繰り返す.
    std::ostringstream out;
    for (int i = 1; i <= 15; ++i) {
        out << fizz_buzz++ << ", ";
    }

    // 【検証】
    // 文字列ストリームに出力された FizzBuzz 演算の結果が期待結果と一致すること.
    const std::string expect = "1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, "
                               "11, Fizz, 13, 14, Fizz Buzz, ";
    BOOST_CHECK_EQUAL(out.str(), expect);
}

BOOST_AUTO_TEST_SUITE_END(/* class__FizzBuzzSequenceElement */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_SEQUENCE_CLASS_TEST_CASE_HXX */
