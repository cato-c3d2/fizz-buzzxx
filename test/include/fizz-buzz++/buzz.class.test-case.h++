/*!
 * @file buzz.class.test-case.h++
 */

#ifndef TEST__INCLUDE__FIZZ_BUZZXX__BUZZ_CLASS_TEST_CASE_HXX
#define TEST__INCLUDE__FIZZ_BUZZXX__BUZZ_CLASS_TEST_CASE_HXX

#include <fizz-buzz++/buzz.class.h++>

BOOST_AUTO_TEST_SUITE(namespace__fizz_buzzxx)

using namespace fizz_buzzxx;

BOOST_AUTO_TEST_SUITE(class__Buzz)

/*!
 * @brief テストパターン :
 *        @c Buzz のオブジェクトがコピー代入可能であることを検証する
 *
 * @see fizz_buzzxx::Buzz
 */
BOOST_AUTO_TEST_CASE(copy_assignable)
{
    // clang-format off
    const Buzz source      = {};            // コピー元のオブジェクト
          Buzz destination = { 3, "Fizz" }; // コピー先のオブジェクト
    // clang-format on

    // コピー元のオブジェクトをコピー先のオブジェクトをコピー代入する
    destination = source;

    // 二つのオブジェクトは等価であること
    BOOST_CHECK(source == destination);

    // 二つのオブジェクトのアドレスは異なること
    BOOST_CHECK(std::addressof(source) != std::addressof(destination));
}

/*!
 * @brief テストパターン :
 *        デフォルトの @c Buzz のオブジェクトを生成し,
 *        正の整数に対して BUZZ 演算を行う
 *
 * @see fizz_buzzxx::Buzz::Buzz()
 * @see fizz_buzzxx::Buzz::operator()()
 */
BOOST_AUTO_TEST_CASE(default_construction_x_positive_number)
{
    // デフォルト引数で Buzz のオブジェクトを生成する
    const Buzz buzz = {};

    // clang-format off
    BOOST_CHECK_EQUAL(buzz( 1), "1"   );
    BOOST_CHECK_EQUAL(buzz( 2), "2"   );
    BOOST_CHECK_EQUAL(buzz( 3), "3"   );
    BOOST_CHECK_EQUAL(buzz( 4), "4"   );
    BOOST_CHECK_EQUAL(buzz( 5), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 6), "6"   );
    BOOST_CHECK_EQUAL(buzz( 7), "7"   );
    BOOST_CHECK_EQUAL(buzz( 8), "8"   );
    BOOST_CHECK_EQUAL(buzz( 9), "9"   );
    BOOST_CHECK_EQUAL(buzz(10), "Buzz");
    BOOST_CHECK_EQUAL(buzz(11), "11"  );
    BOOST_CHECK_EQUAL(buzz(12), "12"  );
    BOOST_CHECK_EQUAL(buzz(13), "13"  );
    BOOST_CHECK_EQUAL(buzz(14), "14"  );
    BOOST_CHECK_EQUAL(buzz(15), "Buzz");
    BOOST_CHECK_EQUAL(buzz(16), "16"  );
    BOOST_CHECK_EQUAL(buzz(17), "17"  );
    BOOST_CHECK_EQUAL(buzz(18), "18"  );
    BOOST_CHECK_EQUAL(buzz(19), "19"  );
    BOOST_CHECK_EQUAL(buzz(20), "Buzz");
    // clang-format on
}

/*!
 * @brief テストパターン :
 *        デフォルトの @c Buzz のオブジェクトを生成し,
 *        @c 0 に対して BUZZ 演算を行う
 *
 * @see fizz_buzzxx::Buzz::Buzz()
 * @see fizz_buzzxx::Buzz::operator()()
 */
BOOST_AUTO_TEST_CASE(default_construction_x_zero)
{
    // デフォルト引数で Buzz のオブジェクトを生成する
    const Buzz buzz = {};

    BOOST_CHECK_EQUAL(buzz(0), "Buzz");
}

/*!
 * @brief テストパターン :
 *        デフォルトの @c Buzz のオブジェクトを生成し,
 *        負の整数に対して BUZZ 演算を行う
 *
 * @see fizz_buzzxx::Buzz::Buzz()
 * @see fizz_buzzxx::Buzz::operator()()
 */
BOOST_AUTO_TEST_CASE(default_construction_x_negative_number)
{
    // デフォルト引数で Buzz のオブジェクトを生成する
    const Buzz buzz = {};

    // clang-format off
    BOOST_CHECK_EQUAL(buzz( -1), "-1"  );
    BOOST_CHECK_EQUAL(buzz( -2), "-2"  );
    BOOST_CHECK_EQUAL(buzz( -3), "-3"  );
    BOOST_CHECK_EQUAL(buzz( -4), "-4"  );
    BOOST_CHECK_EQUAL(buzz( -5), "Buzz");
    BOOST_CHECK_EQUAL(buzz( -6), "-6"  );
    BOOST_CHECK_EQUAL(buzz( -7), "-7"  );
    BOOST_CHECK_EQUAL(buzz( -8), "-8"  );
    BOOST_CHECK_EQUAL(buzz( -9), "-9"  );
    BOOST_CHECK_EQUAL(buzz(-10), "Buzz");
    BOOST_CHECK_EQUAL(buzz(-11), "-11" );
    BOOST_CHECK_EQUAL(buzz(-12), "-12" );
    BOOST_CHECK_EQUAL(buzz(-13), "-13" );
    BOOST_CHECK_EQUAL(buzz(-14), "-14" );
    BOOST_CHECK_EQUAL(buzz(-15), "Buzz");
    BOOST_CHECK_EQUAL(buzz(-16), "-16" );
    BOOST_CHECK_EQUAL(buzz(-17), "-17" );
    BOOST_CHECK_EQUAL(buzz(-18), "-18" );
    BOOST_CHECK_EQUAL(buzz(-19), "-19" );
    BOOST_CHECK_EQUAL(buzz(-20), "Buzz");
    // clang-format on
}

/*!
 * @brief テストパターン :
 *        BUZZ 除数を変更して
 *        @c Buzz のオブジェクトを生成し, BUZZ 演算を行う
 *
 * @see fizz_buzzxx::Buzz::Buzz()
 * @see fizz_buzzxx::Buzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_divisor)
{
    // BUZZ 除数として 6 を指定する
    const Buzz buzz = { 6 };

    // clang-format off
    BOOST_CHECK_EQUAL(buzz( 1), "1"   );
    BOOST_CHECK_EQUAL(buzz( 2), "2"   );
    BOOST_CHECK_EQUAL(buzz( 3), "3"   );
    BOOST_CHECK_EQUAL(buzz( 4), "4"   );
    BOOST_CHECK_EQUAL(buzz( 5), "5"   );
    BOOST_CHECK_EQUAL(buzz( 6), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 7), "7"   );
    BOOST_CHECK_EQUAL(buzz( 8), "8"   );
    BOOST_CHECK_EQUAL(buzz( 9), "9"   );
    BOOST_CHECK_EQUAL(buzz(10), "10"  );
    BOOST_CHECK_EQUAL(buzz(11), "11"  );
    BOOST_CHECK_EQUAL(buzz(12), "Buzz");
    BOOST_CHECK_EQUAL(buzz(13), "13"  );
    BOOST_CHECK_EQUAL(buzz(14), "14"  );
    BOOST_CHECK_EQUAL(buzz(15), "15"  );
    BOOST_CHECK_EQUAL(buzz(16), "16"  );
    BOOST_CHECK_EQUAL(buzz(17), "17"  );
    BOOST_CHECK_EQUAL(buzz(18), "Buzz");
    BOOST_CHECK_EQUAL(buzz(19), "19"  );
    BOOST_CHECK_EQUAL(buzz(20), "20"  );
    // clang-format on
}

/*!
 * @brief テストパターン :
 *        BUZZ 除数を @c 1 に変更して
 *        @c Buzz のオブジェクトを生成し, BUZZ 演算を行う
 *
 * @see fizz_buzzxx::Buzz::Buzz()
 * @see fizz_buzzxx::Buzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_divisor_to_one)
{
    // BUZZ 除数として 1 を指定する
    const Buzz buzz = { 1 };

    // clang-format off
    BOOST_CHECK_EQUAL(buzz( 1), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 2), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 3), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 4), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 5), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 6), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 7), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 8), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 9), "Buzz");
    BOOST_CHECK_EQUAL(buzz(10), "Buzz");
    BOOST_CHECK_EQUAL(buzz(11), "Buzz");
    BOOST_CHECK_EQUAL(buzz(12), "Buzz");
    BOOST_CHECK_EQUAL(buzz(13), "Buzz");
    BOOST_CHECK_EQUAL(buzz(14), "Buzz");
    BOOST_CHECK_EQUAL(buzz(15), "Buzz");
    BOOST_CHECK_EQUAL(buzz(16), "Buzz");
    BOOST_CHECK_EQUAL(buzz(17), "Buzz");
    BOOST_CHECK_EQUAL(buzz(18), "Buzz");
    BOOST_CHECK_EQUAL(buzz(19), "Buzz");
    BOOST_CHECK_EQUAL(buzz(20), "Buzz");
    // clang-format on
}

/*!
 * @brief テストパターン :
 *        BUZZ 除数を @c 0 に変更して @c Buzz のオブジェクトを生成する
 *
 * @c Buzz のオブジェクトを生成する際に例外が発生するため,
 * BUZZ 演算は行わない(行えない).
 *
 * @see fizz_buzzxx::Buzz::Buzz()
 */
BOOST_AUTO_TEST_CASE(change_divisor_to_zero)
{
    // BUZZ 除数として 0 を指定した場合, 例外が発生すること
    BOOST_CHECK_THROW(Buzz { 0 }, std::invalid_argument);
}

/*!
 * @brief テストパターン :
 *        BUZZ 除数を負の整数に変更して
 *        @c Buzz のオブジェクトを生成し, BUZZ 演算を行う
 *
 * @see fizz_buzzxx::Buzz::Buzz()
 * @see fizz_buzzxx::Buzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_divisor_to_negative_number)
{
    // BUZZ 除数として -5 を指定する
    const Buzz buzz = { -5 };

    // clang-format off
    BOOST_CHECK_EQUAL(buzz( 1), "1"   );
    BOOST_CHECK_EQUAL(buzz( 2), "2"   );
    BOOST_CHECK_EQUAL(buzz( 3), "3"   );
    BOOST_CHECK_EQUAL(buzz( 4), "4"   );
    BOOST_CHECK_EQUAL(buzz( 5), "Buzz");
    BOOST_CHECK_EQUAL(buzz( 6), "6"   );
    BOOST_CHECK_EQUAL(buzz( 7), "7"   );
    BOOST_CHECK_EQUAL(buzz( 8), "8"   );
    BOOST_CHECK_EQUAL(buzz( 9), "9"   );
    BOOST_CHECK_EQUAL(buzz(10), "Buzz");
    BOOST_CHECK_EQUAL(buzz(11), "11"  );
    BOOST_CHECK_EQUAL(buzz(12), "12"  );
    BOOST_CHECK_EQUAL(buzz(13), "13"  );
    BOOST_CHECK_EQUAL(buzz(14), "14"  );
    BOOST_CHECK_EQUAL(buzz(15), "Buzz");
    BOOST_CHECK_EQUAL(buzz(16), "16"  );
    BOOST_CHECK_EQUAL(buzz(17), "17"  );
    BOOST_CHECK_EQUAL(buzz(18), "18"  );
    BOOST_CHECK_EQUAL(buzz(19), "19"  );
    BOOST_CHECK_EQUAL(buzz(20), "Buzz");
    // clang-format on
}

/*!
 * @brief テストパターン :
 *        BUZZ 文言を変更して
 *        @c Buzz のオブジェクトを生成し, BUZZ 演算を行う
 *
 * @see fizz_buzzxx::Buzz::Buzz()
 * @see fizz_buzzxx::Buzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_message)
{
    // BUZZ 文言として "buzz++" を指定する
    const Buzz buzz = { 5, "buzz++" };

    // clang-format off
    BOOST_CHECK_EQUAL(buzz( 1), "1"     );
    BOOST_CHECK_EQUAL(buzz( 2), "2"     );
    BOOST_CHECK_EQUAL(buzz( 3), "3"     );
    BOOST_CHECK_EQUAL(buzz( 4), "4"     );
    BOOST_CHECK_EQUAL(buzz( 5), "buzz++");
    BOOST_CHECK_EQUAL(buzz( 6), "6"     );
    BOOST_CHECK_EQUAL(buzz( 7), "7"     );
    BOOST_CHECK_EQUAL(buzz( 8), "8"     );
    BOOST_CHECK_EQUAL(buzz( 9), "9"     );
    BOOST_CHECK_EQUAL(buzz(10), "buzz++");
    BOOST_CHECK_EQUAL(buzz(11), "11"    );
    BOOST_CHECK_EQUAL(buzz(12), "12"    );
    BOOST_CHECK_EQUAL(buzz(13), "13"    );
    BOOST_CHECK_EQUAL(buzz(14), "14"    );
    BOOST_CHECK_EQUAL(buzz(15), "buzz++");
    BOOST_CHECK_EQUAL(buzz(16), "16"    );
    BOOST_CHECK_EQUAL(buzz(17), "17"    );
    BOOST_CHECK_EQUAL(buzz(18), "18"    );
    BOOST_CHECK_EQUAL(buzz(19), "19"    );
    BOOST_CHECK_EQUAL(buzz(20), "buzz++");
    // clang-format on
}

/*!
 * @brief テストパターン :
 *        BUZZ 文言を空文字列に変更して
 *        @c Buzz のオブジェクトを生成し, BUZZ 演算を行う
 *
 * @see fizz_buzzxx::Buzz::Buzz()
 * @see fizz_buzzxx::Buzz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_message_to_empty)
{
    // BUZZ 文言として空文字列を指定する
    const Buzz buzz = { 5, "" };

    // clang-format off
    BOOST_CHECK_EQUAL(buzz( 1), "1" );
    BOOST_CHECK_EQUAL(buzz( 2), "2" );
    BOOST_CHECK_EQUAL(buzz( 3), "3" );
    BOOST_CHECK_EQUAL(buzz( 4), "4" );
    BOOST_CHECK_EQUAL(buzz( 5), ""  );
    BOOST_CHECK_EQUAL(buzz( 6), "6" );
    BOOST_CHECK_EQUAL(buzz( 7), "7" );
    BOOST_CHECK_EQUAL(buzz( 8), "8" );
    BOOST_CHECK_EQUAL(buzz( 9), "9" );
    BOOST_CHECK_EQUAL(buzz(10), ""  );
    BOOST_CHECK_EQUAL(buzz(11), "11");
    BOOST_CHECK_EQUAL(buzz(12), "12");
    BOOST_CHECK_EQUAL(buzz(13), "13");
    BOOST_CHECK_EQUAL(buzz(14), "14");
    BOOST_CHECK_EQUAL(buzz(15), ""  );
    BOOST_CHECK_EQUAL(buzz(16), "16");
    BOOST_CHECK_EQUAL(buzz(17), "17");
    BOOST_CHECK_EQUAL(buzz(18), "18");
    BOOST_CHECK_EQUAL(buzz(19), "19");
    BOOST_CHECK_EQUAL(buzz(20), ""  );
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* class__Buzz */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__BUZZ_CLASS_TEST_CASE_HXX */
