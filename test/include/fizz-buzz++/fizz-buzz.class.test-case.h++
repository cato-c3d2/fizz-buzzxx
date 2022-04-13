/*!
 * @file fizz-buzz.class.test-case.h++
 */

#ifndef TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_TEST_CASE_HXX
#define TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_TEST_CASE_HXX

#include <fizz-buzz++/fizz-buzz.class.h++>

BOOST_AUTO_TEST_SUITE(namespace__fizz_buzzxx)

using namespace fizz_buzzxx;

BOOST_AUTO_TEST_SUITE(class__FizzBuzz)

/*!
 * テストパターン :
 * デフォルトの @c FizzBuzz のオブジェクトを生成し,
 * 正の整数に対して FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(default_construction_x_positive_number)
{
    // デフォルト引数で FizzBuzz のオブジェクトを生成する
    const FizzBuzz fizz_buzz = {};

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"       );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"       );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"       );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"       );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"       );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"       );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "Buzz"     );
    // clang-format on
}

/*!
 * テストパターン :
 * デフォルトの @c FizzBuzz のオブジェクトを生成し,
 * @c 0 に対して FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(default_construction_x_zero)
{
    // デフォルト引数で FizzBuzz のオブジェクトを生成する
    const FizzBuzz fizz_buzz = {};

    BOOST_CHECK_EQUAL(fizz_buzz(0), "Fizz Buzz");
}

/*!
 * テストパターン :
 * デフォルトの @c FizzBuzz のオブジェクトを生成し,
 * 負の整数に対して FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(default_construction_x_negative_number)
{
    // デフォルト引数で FizzBuzz のオブジェクトを生成する
    const FizzBuzz fizz_buzz = {};

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( -1), "-1"       );
    BOOST_CHECK_EQUAL(fizz_buzz( -2), "-2"       );
    BOOST_CHECK_EQUAL(fizz_buzz( -3), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( -4), "-4"       );
    BOOST_CHECK_EQUAL(fizz_buzz( -5), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( -6), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( -7), "-7"       );
    BOOST_CHECK_EQUAL(fizz_buzz( -8), "-8"       );
    BOOST_CHECK_EQUAL(fizz_buzz( -9), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(-10), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(-11), "-11"      );
    BOOST_CHECK_EQUAL(fizz_buzz(-12), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(-13), "-13"      );
    BOOST_CHECK_EQUAL(fizz_buzz(-14), "-14"      );
    BOOST_CHECK_EQUAL(fizz_buzz(-15), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(-16), "-16"      );
    BOOST_CHECK_EQUAL(fizz_buzz(-17), "-17"      );
    BOOST_CHECK_EQUAL(fizz_buzz(-18), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(-19), "-19"      );
    BOOST_CHECK_EQUAL(fizz_buzz(-20), "Buzz"     );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の除数を変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_fizz_divisor)
{
    // Fizz の除数として 4 を指定する
    const FizzBuzz fizz_buzz = { Fizz { 4 } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "3"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "6"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "9"        );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"       );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"       );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"       );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(16), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"       );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "18"       );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"       );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "Fizz Buzz");
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の除数を @c 1 に変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_fizz_divisor_to_one)
{
    // Fizz の除数として 1 を指定する
    const FizzBuzz fizz_buzz = { Fizz { 1 } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(11), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(16), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "Fizz Buzz");
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の除数を @c 0 に変更して @c FizzBuzz のオブジェクトを生成する
 *
 * @c FizzBuzz のオブジェクトを生成する際に例外が発生するため,
 * FizzBuzz 演算は行わない(行えない).
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 */
BOOST_AUTO_TEST_CASE(change_fizz_divisor_to_zero)
{
    // Fizz の除数として 0 を指定した場合, 例外が発生すること
    BOOST_CHECK_THROW(FizzBuzz { Fizz { 0 } }, std::invalid_argument);
}

/*!
 * テストパターン :
 * Fizz の除数を負の整数に変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_fizz_divisor_to_negative_number)
{
    // Fizz の除数として -3 を指定する
    const FizzBuzz fizz_buzz = { Fizz { -3 } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"       );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"       );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"       );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"       );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"       );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"       );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "Buzz"     );
    // clang-format on
}

/*!
 * テストパターン :
 * Buzz の除数を変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_buzz_divisor)
{
    // Buzz の除数として 6 を指定する
    const FizzBuzz fizz_buzz = { Buzz { 6 } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "5"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "10"       );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"       );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"       );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"       );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"       );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"       );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"       );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "20"       );
    // clang-format on
}

/*!
 * テストパターン :
 * Buzz の除数を @c 1 に変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_buzz_divisor_to_one)
{
    // Buzz の除数として 1 を指定する
    const FizzBuzz fizz_buzz = { Buzz { 1 } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(10), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(13), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(16), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(19), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "Buzz"     );
    // clang-format on
}

/*!
 * テストパターン :
 * Buzz の除数を @c 0 に変更して @c FizzBuzz のオブジェクトを生成する
 *
 * @c FizzBuzz のオブジェクトを生成する際に例外が発生するため,
 * FizzBuzz 演算は行わない(行えない).
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 */
BOOST_AUTO_TEST_CASE(change_buzz_divisor_to_zero)
{
    // Buzz の除数として 0 を指定した場合, 例外が発生すること
    BOOST_CHECK_THROW(FizzBuzz { Buzz { 0 } }, std::invalid_argument);
}

/*!
 * テストパターン :
 * Buzz の除数を負の整数に変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_buzz_divisor_to_negative_number)
{
    // Buzz の除数として -5 を指定する
    const FizzBuzz fizz_buzz = { Buzz { -5 } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"       );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"       );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"       );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"       );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"       );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"       );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "Buzz"     );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の除数及び Buzz の除数を変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_fizz_divisor_and_buzz_divisor)
{
    // Fizz の除数として 4 を,
    // Buzz の除数として 6 を指定する
    const FizzBuzz fizz_buzz = { Fizz { 4 }, Buzz { 6 } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "3"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "5"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"        );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "9"        );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "10"       );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"       );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"       );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"       );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "15"       );
    BOOST_CHECK_EQUAL(fizz_buzz(16), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"       );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "Buzz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"       );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "Fizz"     );
    BOOST_CHECK_EQUAL(fizz_buzz(21), "21"       );
    BOOST_CHECK_EQUAL(fizz_buzz(22), "22"       );
    BOOST_CHECK_EQUAL(fizz_buzz(23), "23"       );
    BOOST_CHECK_EQUAL(fizz_buzz(24), "Fizz Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(25), "25"       );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の文言を変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_fizz_message)
{
    // Fizz の文言として "fizz++" を指定する
    const FizzBuzz fizz_buzz = { Fizz { "fizz++" } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "fizz++"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "Buzz"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "fizz++"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "fizz++"     );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "Buzz"       );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"         );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "fizz++"     );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"         );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"         );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "fizz++ Buzz");
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"         );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"         );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "fizz++"     );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"         );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "Buzz"       );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の文言を空文字列に変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_fizz_message_to_empty)
{
    // Fizz の文言として空文字列を指定する
    const FizzBuzz fizz_buzz = { Fizz { "" } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "Buzz"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "Buzz"       );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"         );
    BOOST_CHECK_EQUAL(fizz_buzz(12), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"         );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"         );
    BOOST_CHECK_EQUAL(fizz_buzz(15), " Buzz"      );
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"         );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"         );
    BOOST_CHECK_EQUAL(fizz_buzz(18), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"         );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "Buzz"       );
    // clang-format on
}

/*!
 * テストパターン :
 * Buzz の文言を変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_buzz_message)
{
    // Buzz の文言として "buzz++" を指定する
    const FizzBuzz fizz_buzz = { Buzz { "buzz++" } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "buzz++"     );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "buzz++"     );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"         );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"         );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"         );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "Fizz buzz++");
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"         );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"         );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"         );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "buzz++"     );
    // clang-format on
}

/*!
 * テストパターン :
 * Buzz の文言を空文字列に変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_buzz_message_to_empty)
{
    // Buzz の文言として空文字列を指定する
    const FizzBuzz fizz_buzz = { Buzz { "" } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz(10), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"         );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"         );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"         );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "Fizz "      );
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"         );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"         );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "Fizz"       );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"         );
    BOOST_CHECK_EQUAL(fizz_buzz(20), ""           );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の文言及び Buzz の文言を変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_fizz_message_and_buzz_message)
{
    // Fizz の文言として "fizz++" を,
    // Buzz の文言として "buzz++" を指定する
    const FizzBuzz fizz_buzz = { Fizz { "fizz++" }, Buzz { "buzz++" } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "fizz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "buzz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "fizz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "fizz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "buzz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"           );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "fizz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"           );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"           );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "fizz++ buzz++");
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"           );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"           );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "fizz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"           );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "buzz++"       );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の文言及び Buzz の文言を空文字列に変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_fizz_message_and_buzz_message_to_empty)
{
    // Fizz の文言及び Buzz の文言として空文字列を指定する
    const FizzBuzz fizz_buzz = { Fizz { "" }, Buzz { "" } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "4"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "8"          );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz(10), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"         );
    BOOST_CHECK_EQUAL(fizz_buzz(12), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"         );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"         );
    BOOST_CHECK_EQUAL(fizz_buzz(15), " "          );
    BOOST_CHECK_EQUAL(fizz_buzz(16), "16"         );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"         );
    BOOST_CHECK_EQUAL(fizz_buzz(18), ""           );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"         );
    BOOST_CHECK_EQUAL(fizz_buzz(20), ""           );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の除数, Buzz の除数, Fizz の文言, 及び Buzz の文言を変更して
 * @c FizzBuzz のオブジェクトを生成し, FizzBuzz 演算を行う
 *
 * @see fizz_buzzxx::FizzBuzz::FizzBuzz()
 * @see fizz_buzzxx::FizzBuzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_all)
{
    // Fizz の除数として 4 を,
    // Buzz の除数として 6 を,
    // Fizz の文言として "fizz++" を,
    // Buzz の文言として "buzz++" を指定する
    const FizzBuzz fizz_buzz = { Fizz { 4, "fizz++" }, Buzz { 6, "buzz++" } };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz_buzz( 1), "1"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 2), "2"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 3), "3"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 4), "fizz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 5), "5"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 6), "buzz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 7), "7"            );
    BOOST_CHECK_EQUAL(fizz_buzz( 8), "fizz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz( 9), "9"            );
    BOOST_CHECK_EQUAL(fizz_buzz(10), "10"           );
    BOOST_CHECK_EQUAL(fizz_buzz(11), "11"           );
    BOOST_CHECK_EQUAL(fizz_buzz(12), "fizz++ buzz++");
    BOOST_CHECK_EQUAL(fizz_buzz(13), "13"           );
    BOOST_CHECK_EQUAL(fizz_buzz(14), "14"           );
    BOOST_CHECK_EQUAL(fizz_buzz(15), "15"           );
    BOOST_CHECK_EQUAL(fizz_buzz(16), "fizz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz(17), "17"           );
    BOOST_CHECK_EQUAL(fizz_buzz(18), "buzz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz(19), "19"           );
    BOOST_CHECK_EQUAL(fizz_buzz(20), "fizz++"       );
    BOOST_CHECK_EQUAL(fizz_buzz(21), "21"           );
    BOOST_CHECK_EQUAL(fizz_buzz(22), "22"           );
    BOOST_CHECK_EQUAL(fizz_buzz(23), "23"           );
    BOOST_CHECK_EQUAL(fizz_buzz(24), "fizz++ buzz++");
    BOOST_CHECK_EQUAL(fizz_buzz(25), "25"           );
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* class__FizzBuzz */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_TEST_CASE_HXX */
