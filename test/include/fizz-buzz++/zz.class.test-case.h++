/*!
 * @file zz.class.test-case.h++
 */

#ifndef TEST__INCLUDE__FIZZ_BUZZXX__ZZ_CLASS_TEST_CASE_HXX
#define TEST__INCLUDE__FIZZ_BUZZXX__ZZ_CLASS_TEST_CASE_HXX

#include <fizz-buzz++/zz.class.h++>

BOOST_AUTO_TEST_SUITE(namespace__fizz_buzzxx)

using namespace fizz_buzzxx;

BOOST_AUTO_TEST_SUITE(class__Zz)

/*!
 * テストパターン :
 * Zz の除数に @c 3 を, Zz の文言に @c "Fizz" を指定して
 * @c Zz のオブジェクトを生成し, 正の整数に対して Zz 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(operate_by_positive_numbers)
{
    // Zz の除数に 3 を, Zz の文言に "Fizz" を指定して Zz のオブジェクトを生成する
    Zz zz = { 3, "Fizz" };

    // clang-format off
    BOOST_CHECK_EQUAL(zz( 1), "1"   );
    BOOST_CHECK_EQUAL(zz( 2), "2"   );
    BOOST_CHECK_EQUAL(zz( 3), "Fizz");
    BOOST_CHECK_EQUAL(zz( 4), "4"   );
    BOOST_CHECK_EQUAL(zz( 5), "5"   );
    BOOST_CHECK_EQUAL(zz( 6), "Fizz");
    BOOST_CHECK_EQUAL(zz( 7), "7"   );
    BOOST_CHECK_EQUAL(zz( 8), "8"   );
    BOOST_CHECK_EQUAL(zz( 9), "Fizz");
    BOOST_CHECK_EQUAL(zz(10), "10"  );
    BOOST_CHECK_EQUAL(zz(11), "11"  );
    BOOST_CHECK_EQUAL(zz(12), "Fizz");
    BOOST_CHECK_EQUAL(zz(13), "13"  );
    BOOST_CHECK_EQUAL(zz(14), "14"  );
    BOOST_CHECK_EQUAL(zz(15), "Fizz");
    BOOST_CHECK_EQUAL(zz(16), "16"  );
    BOOST_CHECK_EQUAL(zz(17), "17"  );
    BOOST_CHECK_EQUAL(zz(18), "Fizz");
    BOOST_CHECK_EQUAL(zz(19), "19"  );
    BOOST_CHECK_EQUAL(zz(20), "20"  );
    // clang-format on
}

/*!
 * テストパターン :
 * Zz の除数に @c 3 を, Zz の文言に @c "Fizz" を指定して
 * @c Zz のオブジェクトを生成し, @c 0 に対して Zz 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(operate_by_zero)
{
    // Zz の除数に 3 を, Zz の文言に "Fizz" を指定して Zz のオブジェクトを生成する
    Zz zz = { 3, "Fizz" };

    BOOST_CHECK_EQUAL(zz(0), "Fizz");
}

/*!
 * テストパターン :
 * Zz の除数に @c 3 を, Zz の文言に @c "Fizz" を指定して
 * @c Zz のオブジェクトを生成し, 負の整数に対して Zz 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(operate_by_negative_numbers)
{
    // Zz の除数に 3 を, Zz の文言に "Fizz" を指定して Zz のオブジェクトを生成する
    Zz zz = { 3, "Fizz" };

    // clang-format off
    BOOST_CHECK_EQUAL(zz( -1), "-1"  );
    BOOST_CHECK_EQUAL(zz( -2), "-2"  );
    BOOST_CHECK_EQUAL(zz( -3), "Fizz");
    BOOST_CHECK_EQUAL(zz( -4), "-4"  );
    BOOST_CHECK_EQUAL(zz( -5), "-5"  );
    BOOST_CHECK_EQUAL(zz( -6), "Fizz");
    BOOST_CHECK_EQUAL(zz( -7), "-7"  );
    BOOST_CHECK_EQUAL(zz( -8), "-8"  );
    BOOST_CHECK_EQUAL(zz( -9), "Fizz");
    BOOST_CHECK_EQUAL(zz(-10), "-10" );
    BOOST_CHECK_EQUAL(zz(-11), "-11" );
    BOOST_CHECK_EQUAL(zz(-12), "Fizz");
    BOOST_CHECK_EQUAL(zz(-13), "-13" );
    BOOST_CHECK_EQUAL(zz(-14), "-14" );
    BOOST_CHECK_EQUAL(zz(-15), "Fizz");
    BOOST_CHECK_EQUAL(zz(-16), "-16" );
    BOOST_CHECK_EQUAL(zz(-17), "-17" );
    BOOST_CHECK_EQUAL(zz(-18), "Fizz");
    BOOST_CHECK_EQUAL(zz(-19), "-19" );
    BOOST_CHECK_EQUAL(zz(-20), "-20" );
    // clang-format on
}

/*!
 * テストパターン :
 * Zz の除数に @c 1 を指定して
 * @c Zz のオブジェクトを生成し, Zz 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(specify_divisor_to_one)
{
    // Zz の除数として 1 を指定する
    Zz zz = { 1, "Zz" };

    // clang-format off
    BOOST_CHECK_EQUAL(zz( 1), "Zz");
    BOOST_CHECK_EQUAL(zz( 2), "Zz");
    BOOST_CHECK_EQUAL(zz( 3), "Zz");
    BOOST_CHECK_EQUAL(zz( 4), "Zz");
    BOOST_CHECK_EQUAL(zz( 5), "Zz");
    BOOST_CHECK_EQUAL(zz( 6), "Zz");
    BOOST_CHECK_EQUAL(zz( 7), "Zz");
    BOOST_CHECK_EQUAL(zz( 8), "Zz");
    BOOST_CHECK_EQUAL(zz( 9), "Zz");
    BOOST_CHECK_EQUAL(zz(10), "Zz");
    BOOST_CHECK_EQUAL(zz(11), "Zz");
    BOOST_CHECK_EQUAL(zz(12), "Zz");
    BOOST_CHECK_EQUAL(zz(13), "Zz");
    BOOST_CHECK_EQUAL(zz(14), "Zz");
    BOOST_CHECK_EQUAL(zz(15), "Zz");
    BOOST_CHECK_EQUAL(zz(16), "Zz");
    BOOST_CHECK_EQUAL(zz(17), "Zz");
    BOOST_CHECK_EQUAL(zz(18), "Zz");
    BOOST_CHECK_EQUAL(zz(19), "Zz");
    BOOST_CHECK_EQUAL(zz(20), "Zz");
    // clang-format on
}

/*!
 * テストパターン :
 * Zz の除数に @c 0 を指定して @c Zz のオブジェクトを生成する
 *
 * @c Zz のオブジェクトを生成する際に例外が発生するため,
 * Zz 演算は行わない(行えない).
 *
 * @see fizz_buzzxx::Zz::Zz()
 */
BOOST_AUTO_TEST_CASE(specify_divisor_to_zero)
{
    // Zz の除数として 0 を指定した場合, 例外が発生すること
    // NOTE BOOST_CHECK_THROW と一様初期化(波括弧による初期化)を併用すると
    //      コンパイルが通らないため, コンストラクタ呼び出しによる初期化を使用する.
    //      ただし, 初期化するオブジェクトの引数が 1 つであれば,
    //      一様初期化でもコンパイルは通る模様.
    BOOST_CHECK_THROW(Zz(0, "Zz"), std::invalid_argument);
}

/*!
 * テストパターン :
 * Zz の除数に負の整数を指定して
 * @c Zz のオブジェクトを生成し, Zz 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(specify_divisor_to_negative_number)
{
    // Zz の除数として -5 を指定する
    Zz zz = { -5, "Buzz" };

    // clang-format off
    BOOST_CHECK_EQUAL(zz( 1), "1"   );
    BOOST_CHECK_EQUAL(zz( 2), "2"   );
    BOOST_CHECK_EQUAL(zz( 3), "3"   );
    BOOST_CHECK_EQUAL(zz( 4), "4"   );
    BOOST_CHECK_EQUAL(zz( 5), "Buzz");
    BOOST_CHECK_EQUAL(zz( 6), "6"   );
    BOOST_CHECK_EQUAL(zz( 7), "7"   );
    BOOST_CHECK_EQUAL(zz( 8), "8"   );
    BOOST_CHECK_EQUAL(zz( 9), "9"   );
    BOOST_CHECK_EQUAL(zz(10), "Buzz");
    BOOST_CHECK_EQUAL(zz(11), "11"  );
    BOOST_CHECK_EQUAL(zz(12), "12"  );
    BOOST_CHECK_EQUAL(zz(13), "13"  );
    BOOST_CHECK_EQUAL(zz(14), "14"  );
    BOOST_CHECK_EQUAL(zz(15), "Buzz");
    BOOST_CHECK_EQUAL(zz(16), "16"  );
    BOOST_CHECK_EQUAL(zz(17), "17"  );
    BOOST_CHECK_EQUAL(zz(18), "18"  );
    BOOST_CHECK_EQUAL(zz(19), "19"  );
    BOOST_CHECK_EQUAL(zz(20), "Buzz");
    // clang-format on
}

/*!
 * テストパターン :
 * Zz の文言を空文字列に変更して
 * @c Zz のオブジェクトを生成し, Zz 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(specify_message_to_empty)
{
    // Zz の文言として空文字列を指定する
    Zz zz = { 5, "" };

    // clang-format off
    BOOST_CHECK_EQUAL(zz( 1), "1" );
    BOOST_CHECK_EQUAL(zz( 2), "2" );
    BOOST_CHECK_EQUAL(zz( 3), "3" );
    BOOST_CHECK_EQUAL(zz( 4), "4" );
    BOOST_CHECK_EQUAL(zz( 5), ""  );
    BOOST_CHECK_EQUAL(zz( 6), "6" );
    BOOST_CHECK_EQUAL(zz( 7), "7" );
    BOOST_CHECK_EQUAL(zz( 8), "8" );
    BOOST_CHECK_EQUAL(zz( 9), "9" );
    BOOST_CHECK_EQUAL(zz(10), ""  );
    BOOST_CHECK_EQUAL(zz(11), "11");
    BOOST_CHECK_EQUAL(zz(12), "12");
    BOOST_CHECK_EQUAL(zz(13), "13");
    BOOST_CHECK_EQUAL(zz(14), "14");
    BOOST_CHECK_EQUAL(zz(15), ""  );
    BOOST_CHECK_EQUAL(zz(16), "16");
    BOOST_CHECK_EQUAL(zz(17), "17");
    BOOST_CHECK_EQUAL(zz(18), "18");
    BOOST_CHECK_EQUAL(zz(19), "19");
    BOOST_CHECK_EQUAL(zz(20), ""  );
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* class__Zz */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__ZZ_CLASS_TEST_CASE_HXX */
