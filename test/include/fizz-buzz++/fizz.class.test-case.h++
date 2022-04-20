/*!
 * @file fizz.class.test-case.h++
 */

#ifndef TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_CLASS_TEST_CASE_HXX
#define TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_CLASS_TEST_CASE_HXX

#include <fizz-buzz++/fizz.class.h++>

BOOST_AUTO_TEST_SUITE(namespace__fizz_buzzxx)

using namespace fizz_buzzxx;

BOOST_AUTO_TEST_SUITE(class__Fizz)

/*!
 * テストパターン :
 * @c Fizz のオブジェクトがコピー代入可能であることを検証する
 */
BOOST_AUTO_TEST_CASE(copy_assignable)
{
    // clang-format off
    const Fizz source      = {};            // コピー元のオブジェクト
          Fizz destination = { 5, "Buzz" }; // コピー先のオブジェクト
    // clang-format on

    // コピー元のオブジェクトをコピー先のオブジェクトをコピー代入する
    destination = source;

    // 二つのオブジェクトは等価であること
    BOOST_CHECK(source == destination);

    // 二つのオブジェクトのアドレスは異なること
    BOOST_CHECK(std::addressof(source) != std::addressof(destination));
}

/*!
 * テストパターン :
 * デフォルトの @c Fizz のオブジェクトを生成し,
 * 正の整数に対して Fizz 演算を行う
 *
 * @see fizz_buzzxx::Fizz::Fizz()
 * @see fizz_buzzxx::Fizz::operator()()
 */
BOOST_AUTO_TEST_CASE(default_construction_x_positive_number)
{
    // デフォルト引数で Fizz のオブジェクトを生成する
    const Fizz fizz = {};

    // clang-format off
    BOOST_CHECK_EQUAL(fizz( 1), "1"   );
    BOOST_CHECK_EQUAL(fizz( 2), "2"   );
    BOOST_CHECK_EQUAL(fizz( 3), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 4), "4"   );
    BOOST_CHECK_EQUAL(fizz( 5), "5"   );
    BOOST_CHECK_EQUAL(fizz( 6), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 7), "7"   );
    BOOST_CHECK_EQUAL(fizz( 8), "8"   );
    BOOST_CHECK_EQUAL(fizz( 9), "Fizz");
    BOOST_CHECK_EQUAL(fizz(10), "10"  );
    BOOST_CHECK_EQUAL(fizz(11), "11"  );
    BOOST_CHECK_EQUAL(fizz(12), "Fizz");
    BOOST_CHECK_EQUAL(fizz(13), "13"  );
    BOOST_CHECK_EQUAL(fizz(14), "14"  );
    BOOST_CHECK_EQUAL(fizz(15), "Fizz");
    BOOST_CHECK_EQUAL(fizz(16), "16"  );
    BOOST_CHECK_EQUAL(fizz(17), "17"  );
    BOOST_CHECK_EQUAL(fizz(18), "Fizz");
    BOOST_CHECK_EQUAL(fizz(19), "19"  );
    BOOST_CHECK_EQUAL(fizz(20), "20"  );
    // clang-format on
}

/*!
 * テストパターン :
 * デフォルトの @c Fizz のオブジェクトを生成し,
 * @c 0 に対して Fizz 演算を行う
 *
 * @see fizz_buzzxx::Fizz::Fizz()
 * @see fizz_buzzxx::Fizz::operator()()
 */
BOOST_AUTO_TEST_CASE(default_construction_x_zero)
{
    // デフォルト引数で Fizz のオブジェクトを生成する
    const Fizz fizz = {};

    BOOST_CHECK_EQUAL(fizz(0), "Fizz");
}

/*!
 * テストパターン :
 * デフォルトの @c Fizz のオブジェクトを生成し,
 * 負の整数に対して Fizz 演算を行う
 *
 * @see fizz_buzzxx::Fizz::Fizz()
 * @see fizz_buzzxx::Fizz::operator()()
 */
BOOST_AUTO_TEST_CASE(default_construction_x_negative_number)
{
    // デフォルト引数で Fizz のオブジェクトを生成する
    const Fizz fizz = {};

    // clang-format off
    BOOST_CHECK_EQUAL(fizz( -1), "-1"  );
    BOOST_CHECK_EQUAL(fizz( -2), "-2"  );
    BOOST_CHECK_EQUAL(fizz( -3), "Fizz");
    BOOST_CHECK_EQUAL(fizz( -4), "-4"  );
    BOOST_CHECK_EQUAL(fizz( -5), "-5"  );
    BOOST_CHECK_EQUAL(fizz( -6), "Fizz");
    BOOST_CHECK_EQUAL(fizz( -7), "-7"  );
    BOOST_CHECK_EQUAL(fizz( -8), "-8"  );
    BOOST_CHECK_EQUAL(fizz( -9), "Fizz");
    BOOST_CHECK_EQUAL(fizz(-10), "-10" );
    BOOST_CHECK_EQUAL(fizz(-11), "-11" );
    BOOST_CHECK_EQUAL(fizz(-12), "Fizz");
    BOOST_CHECK_EQUAL(fizz(-13), "-13" );
    BOOST_CHECK_EQUAL(fizz(-14), "-14" );
    BOOST_CHECK_EQUAL(fizz(-15), "Fizz");
    BOOST_CHECK_EQUAL(fizz(-16), "-16" );
    BOOST_CHECK_EQUAL(fizz(-17), "-17" );
    BOOST_CHECK_EQUAL(fizz(-18), "Fizz");
    BOOST_CHECK_EQUAL(fizz(-19), "-19" );
    BOOST_CHECK_EQUAL(fizz(-20), "-20" );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の除数を変更して
 * @c Fizz のオブジェクトを生成し, Fizz 演算を行う
 *
 * @see fizz_buzzxx::Fizz::Fizz()
 * @see fizz_buzzxx::Fizz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_divisor)
{
    // Fizz の除数として 4 を指定する
    const Fizz fizz = { 4 };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz( 1), "1"   );
    BOOST_CHECK_EQUAL(fizz( 2), "2"   );
    BOOST_CHECK_EQUAL(fizz( 3), "3"   );
    BOOST_CHECK_EQUAL(fizz( 4), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 5), "5"   );
    BOOST_CHECK_EQUAL(fizz( 6), "6"   );
    BOOST_CHECK_EQUAL(fizz( 7), "7"   );
    BOOST_CHECK_EQUAL(fizz( 8), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 9), "9"   );
    BOOST_CHECK_EQUAL(fizz(10), "10"  );
    BOOST_CHECK_EQUAL(fizz(11), "11"  );
    BOOST_CHECK_EQUAL(fizz(12), "Fizz");
    BOOST_CHECK_EQUAL(fizz(13), "13"  );
    BOOST_CHECK_EQUAL(fizz(14), "14"  );
    BOOST_CHECK_EQUAL(fizz(15), "15"  );
    BOOST_CHECK_EQUAL(fizz(16), "Fizz");
    BOOST_CHECK_EQUAL(fizz(17), "17"  );
    BOOST_CHECK_EQUAL(fizz(18), "18"  );
    BOOST_CHECK_EQUAL(fizz(19), "19"  );
    BOOST_CHECK_EQUAL(fizz(20), "Fizz");
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の除数を @c 1 に変更して
 * @c Fizz のオブジェクトを生成し, Fizz 演算を行う
 *
 * @see fizz_buzzxx::Fizz::Fizz()
 * @see fizz_buzzxx::Fizz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_divisor_to_one)
{
    // Fizz の除数として 1 を指定する
    const Fizz fizz = { 1 };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz( 1), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 2), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 3), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 4), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 5), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 6), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 7), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 8), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 9), "Fizz");
    BOOST_CHECK_EQUAL(fizz(10), "Fizz");
    BOOST_CHECK_EQUAL(fizz(11), "Fizz");
    BOOST_CHECK_EQUAL(fizz(12), "Fizz");
    BOOST_CHECK_EQUAL(fizz(13), "Fizz");
    BOOST_CHECK_EQUAL(fizz(14), "Fizz");
    BOOST_CHECK_EQUAL(fizz(15), "Fizz");
    BOOST_CHECK_EQUAL(fizz(16), "Fizz");
    BOOST_CHECK_EQUAL(fizz(17), "Fizz");
    BOOST_CHECK_EQUAL(fizz(18), "Fizz");
    BOOST_CHECK_EQUAL(fizz(19), "Fizz");
    BOOST_CHECK_EQUAL(fizz(20), "Fizz");
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の除数を @c 0 に変更して @c Fizz のオブジェクトを生成する
 *
 * @c Fizz のオブジェクトを生成する際に例外が発生するため,
 * Fizz 演算は行わない(行えない).
 *
 * @see fizz_buzzxx::Fizz::Fizz()
 */
BOOST_AUTO_TEST_CASE(change_divisor_to_zero)
{
    // Fizz の除数として 0 を指定した場合, 例外が発生すること
    BOOST_CHECK_THROW(Fizz { 0 }, std::invalid_argument);
}

/*!
 * テストパターン :
 * Fizz の除数を負の整数に変更して
 * @c Fizz のオブジェクトを生成し, Fizz 演算を行う
 *
 * @see fizz_buzzxx::Fizz::Fizz()
 * @see fizz_buzzxx::Fizz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_divisor_to_negative_number)
{
    // Fizz の除数として -3 を指定する
    const Fizz fizz = { -3 };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz( 1), "1"   );
    BOOST_CHECK_EQUAL(fizz( 2), "2"   );
    BOOST_CHECK_EQUAL(fizz( 3), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 4), "4"   );
    BOOST_CHECK_EQUAL(fizz( 5), "5"   );
    BOOST_CHECK_EQUAL(fizz( 6), "Fizz");
    BOOST_CHECK_EQUAL(fizz( 7), "7"   );
    BOOST_CHECK_EQUAL(fizz( 8), "8"   );
    BOOST_CHECK_EQUAL(fizz( 9), "Fizz");
    BOOST_CHECK_EQUAL(fizz(10), "10"  );
    BOOST_CHECK_EQUAL(fizz(11), "11"  );
    BOOST_CHECK_EQUAL(fizz(12), "Fizz");
    BOOST_CHECK_EQUAL(fizz(13), "13"  );
    BOOST_CHECK_EQUAL(fizz(14), "14"  );
    BOOST_CHECK_EQUAL(fizz(15), "Fizz");
    BOOST_CHECK_EQUAL(fizz(16), "16"  );
    BOOST_CHECK_EQUAL(fizz(17), "17"  );
    BOOST_CHECK_EQUAL(fizz(18), "Fizz");
    BOOST_CHECK_EQUAL(fizz(19), "19"  );
    BOOST_CHECK_EQUAL(fizz(20), "20"  );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の文言を変更して
 * @c Fizz のオブジェクトを生成し, Fizz 演算を行う
 *
 * @see fizz_buzzxx::Fizz::Fizz()
 * @see fizz_buzzxx::Fizz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_message)
{
    // Fizz の文言として "fizz++" を指定する
    const Fizz fizz = { 3, "fizz++" };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz( 1), "1"     );
    BOOST_CHECK_EQUAL(fizz( 2), "2"     );
    BOOST_CHECK_EQUAL(fizz( 3), "fizz++");
    BOOST_CHECK_EQUAL(fizz( 4), "4"     );
    BOOST_CHECK_EQUAL(fizz( 5), "5"     );
    BOOST_CHECK_EQUAL(fizz( 6), "fizz++");
    BOOST_CHECK_EQUAL(fizz( 7), "7"     );
    BOOST_CHECK_EQUAL(fizz( 8), "8"     );
    BOOST_CHECK_EQUAL(fizz( 9), "fizz++");
    BOOST_CHECK_EQUAL(fizz(10), "10"    );
    BOOST_CHECK_EQUAL(fizz(11), "11"    );
    BOOST_CHECK_EQUAL(fizz(12), "fizz++");
    BOOST_CHECK_EQUAL(fizz(13), "13"    );
    BOOST_CHECK_EQUAL(fizz(14), "14"    );
    BOOST_CHECK_EQUAL(fizz(15), "fizz++");
    BOOST_CHECK_EQUAL(fizz(16), "16"    );
    BOOST_CHECK_EQUAL(fizz(17), "17"    );
    BOOST_CHECK_EQUAL(fizz(18), "fizz++");
    BOOST_CHECK_EQUAL(fizz(19), "19"    );
    BOOST_CHECK_EQUAL(fizz(20), "20"    );
    // clang-format on
}

/*!
 * テストパターン :
 * Fizz の文言を空文字列に変更して
 * @c Fizz のオブジェクトを生成し, Fizz 演算を行う
 *
 * @see fizz_buzzxx::Fizz::Fizz()
 * @see fizz_buzzxx::Fizz::operator()()
 */
BOOST_AUTO_TEST_CASE(change_message_to_empty)
{
    // Fizz の文言として空文字列を指定する
    const Fizz fizz = { 3, "" };

    // clang-format off
    BOOST_CHECK_EQUAL(fizz( 1), "1" );
    BOOST_CHECK_EQUAL(fizz( 2), "2" );
    BOOST_CHECK_EQUAL(fizz( 3), ""  );
    BOOST_CHECK_EQUAL(fizz( 4), "4" );
    BOOST_CHECK_EQUAL(fizz( 5), "5" );
    BOOST_CHECK_EQUAL(fizz( 6), ""  );
    BOOST_CHECK_EQUAL(fizz( 7), "7" );
    BOOST_CHECK_EQUAL(fizz( 8), "8" );
    BOOST_CHECK_EQUAL(fizz( 9), ""  );
    BOOST_CHECK_EQUAL(fizz(10), "10");
    BOOST_CHECK_EQUAL(fizz(11), "11");
    BOOST_CHECK_EQUAL(fizz(12), ""  );
    BOOST_CHECK_EQUAL(fizz(13), "13");
    BOOST_CHECK_EQUAL(fizz(14), "14");
    BOOST_CHECK_EQUAL(fizz(15), ""  );
    BOOST_CHECK_EQUAL(fizz(16), "16");
    BOOST_CHECK_EQUAL(fizz(17), "17");
    BOOST_CHECK_EQUAL(fizz(18), ""  );
    BOOST_CHECK_EQUAL(fizz(19), "19");
    BOOST_CHECK_EQUAL(fizz(20), "20");
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* class__Fizz */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_CLASS_TEST_CASE_HXX */
