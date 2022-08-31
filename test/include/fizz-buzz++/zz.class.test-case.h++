/*!
 * @file zz.class.test-case.h++
 */

#ifndef TEST__INCLUDE__FIZZ_BUZZXX__ZZ_CLASS_TEST_CASE_HXX
#define TEST__INCLUDE__FIZZ_BUZZXX__ZZ_CLASS_TEST_CASE_HXX

#include <fizz-buzz++/buzz.class.h++>
#include <fizz-buzz++/fizz.class.h++>
#include <fizz-buzz++/zz.class.h++>

BOOST_AUTO_TEST_SUITE(namespace__fizz_buzzxx)

using namespace fizz_buzzxx;

BOOST_AUTO_TEST_SUITE(class__Zz)

/*!
 * @brief テストパターン :
 *        @c Zz のオブジェクトがコピー代入可能であることを検証する
 *
 * @see fizz_buzzxx::Zz
 */
BOOST_AUTO_TEST_CASE(copy_assignable)
{
    // clang-format off
    const Zz source      = { 3, "Fizz" }; // コピー元のオブジェクト
          Zz destination = { 5, "Buzz" }; // コピー先のオブジェクト
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
 *        ZZ 除数に @c 3 を, ZZ 文言に @c "Fizz" を指定して
 *        @c Zz のオブジェクトを生成し, 正の整数に対して ZZ 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(operate_by_positive_numbers)
{
    // ZZ 除数に 3 を, ZZ 文言に "Fizz" を指定して Zz のオブジェクトを生成する
    const Zz zz = { 3, "Fizz" };

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
 * @brief テストパターン :
 *        ZZ 除数に @c 3 を, ZZ 文言に @c "Fizz" を指定して
 *        @c Zz のオブジェクトを生成し, @c 0 に対して ZZ 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(operate_by_zero)
{
    // ZZ 除数に 3 を, ZZ 文言に "Fizz" を指定して Zz のオブジェクトを生成する
    const Zz zz = { 3, "Fizz" };

    BOOST_CHECK_EQUAL(zz(0), "Fizz");
}

/*!
 * @brief テストパターン :
 *        ZZ 除数に @c 3 を, ZZ 文言に @c "Fizz" を指定して
 *        @c Zz のオブジェクトを生成し, 負の整数に対して ZZ 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(operate_by_negative_numbers)
{
    // ZZ 除数に 3 を, ZZ 文言に "Fizz" を指定して Zz のオブジェクトを生成する
    const Zz zz = { 3, "Fizz" };

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
 * @brief テストパターン :
 *        ZZ 除数に @c 1 を指定して
 *        @c Zz のオブジェクトを生成し, ZZ 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(specify_divisor_to_one)
{
    // ZZ 除数として 1 を指定する
    const Zz zz = { 1, "Zz" };

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
 * @brief テストパターン :
 *        ZZ 除数に @c 0 を指定して @c Zz のオブジェクトを生成する
 *
 * @c Zz のオブジェクトを生成する際に例外が発生するため,
 * ZZ 演算は行わない(行えない).
 *
 * @see fizz_buzzxx::Zz::Zz()
 */
BOOST_AUTO_TEST_CASE(specify_divisor_to_zero)
{
    // ZZ 除数として 0 を指定した場合, 例外が発生すること
    // NOTE BOOST_CHECK_THROW と一様初期化(波括弧による初期化)を併用すると
    //      コンパイルが通らないため, コンストラクタ呼び出しによる初期化を使用する.
    //      ただし, 初期化するオブジェクトの引数が 1 つであれば,
    //      一様初期化でもコンパイルは通る模様.
    BOOST_CHECK_THROW(Zz(0, "Zz"), std::invalid_argument);
}

/*!
 * @brief テストパターン :
 *        ZZ 除数に負の整数を指定して
 *        @c Zz のオブジェクトを生成し, ZZ 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(specify_divisor_to_negative_number)
{
    // ZZ 除数として -5 を指定する
    const Zz zz = { -5, "Buzz" };

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
 * @brief テストパターン :
 *        ZZ 文言を空文字列に変更して
 *        @c Zz のオブジェクトを生成し, ZZ 演算を行う
 *
 * @see fizz_buzzxx::Zz::Zz()
 * @see fizz_buzzxx::Zz::operator()()
 */
BOOST_AUTO_TEST_CASE(specify_message_to_empty)
{
    // ZZ 文言として空文字列を指定する
    const Zz zz = { 5, "" };

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

BOOST_AUTO_TEST_SUITE(operator__equals)

/*!
 * @brief テストパターン :
 *        @c Zz のオブジェクト同士で等価比較演算を行う
 *
 * @see fizz_buzzxx::Zz::operator==()
 */
BOOST_AUTO_TEST_CASE(compare_with_same_class_instances)
{
    const Zz zz = { 1, "Zz" };

    // 同一オブジェクトで比較した場合
    // 等価であること
    BOOST_CHECK(zz == zz);

    // すべてのデータメンバの値が等しいオブジェクトと比較した場合
    // 等価であること
    const Zz zz_0 = { 1, "Zz" };
    BOOST_CHECK(zz == zz_0);

    // データメンバの値が異なるオブジェクトと比較した場合
    // いずれも等価ではないこと
    // - #1 除数が異なる
    // - #2 文言が異なる
    // - #3 除数と文言が異なる
    // clang-format off
    const Zz zz_1 = { -1, "Zz" };
    const Zz zz_2 = {  1, "zZ" };
    const Zz zz_3 = { -1, "zZ" };

    BOOST_CHECK(!(zz == zz_1));
    BOOST_CHECK(!(zz == zz_2));
    BOOST_CHECK(!(zz == zz_3));
    // clang-format on
}

/*!
 * @brief テストパターン :
 *        @c Zz のオブジェクトと派生クラスのオブジェクトで等価比較演算を行う
 *
 * @see fizz_buzzxx::Zz::operator==()
 * @see fizz_buzzxx::Fizz
 * @see fizz_buzzxx::Buzz
 */
BOOST_AUTO_TEST_CASE(compare_with_derived_class_instances)
{
    const Zz zz = { 1, "Zz" };

    // クラスが異なるがすべてのデータメンバの値が等しいオブジェクトと比較した場合
    // いずれも等価であること
    const Fizz fizz_0 = { 1, "Zz" };
    const Buzz buzz_0 = { 1, "Zz" };

    BOOST_CHECK(zz == fizz_0);
    BOOST_CHECK(zz == buzz_0);

    // クラスが異なりデータメンバの値も異なるオブジェクトと比較した場合
    // いずれも等価ではないこと
    // - fizz_1 ... 除数が異なる Fizz のオブジェクト
    // - fizz_2 ... 文言が異なる Fizz のオブジェクト
    // - fizz_3 ... 除数と文言が異なる Fizz のオブジェクト
    // - buzz_1 ... 除数が異なる Fizz のオブジェクト
    // - buzz_2 ... 文言が異なる Fizz のオブジェクト
    // - buzz_3 ... 除数と文言が異なる Fizz のオブジェクト
    // clang-format off
    const Fizz fizz_1 = { 3, "Zz"   };
    const Fizz fizz_2 = { 1, "Fizz" };
    const Fizz fizz_3 = { 3, "Fizz" };
    const Buzz buzz_1 = { 5, "Zz"   };
    const Buzz buzz_2 = { 1, "Buzz" };
    const Buzz buzz_3 = { 5, "Buzz" };

    BOOST_CHECK(!(zz == fizz_1));
    BOOST_CHECK(!(zz == fizz_2));
    BOOST_CHECK(!(zz == fizz_3));
    BOOST_CHECK(!(zz == buzz_1));
    BOOST_CHECK(!(zz == buzz_2));
    BOOST_CHECK(!(zz == buzz_3));
    // clang-format on
}

/*!
 * @brief テストパターン :
 *        @c Zz のオブジェクトと
 *        同オブジェクトの参照またはポインタで等価比較演算を行う
 *
 * @see fizz_buzzxx::Zz::operator==()
 */
BOOST_AUTO_TEST_CASE(compare_with_references_and_pointers)
{
    const Zz zz = { 1, "Zz" };

    // 同一オブジェクトを指し示す参照またはポインタと比較した場合
    // いずれも等価であること
    // - cr ... const 参照
    // - cp ... const ポインタ
    // - nr ... 非 const 参照
    // - np ... 非 const ポインタ
    // clang-format off
    Zz const & zz_cr =   zz;
    Zz const * zz_cp = & zz;
    Zz       & zz_nr = const_cast<Zz &>(  zz);
    Zz       * zz_np = const_cast<Zz *>(& zz);

    BOOST_CHECK(zz ==   zz_cr);
    BOOST_CHECK(zz == * zz_cp);
    BOOST_CHECK(zz ==   zz_nr);
    BOOST_CHECK(zz == * zz_np);
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* operator__equals */)

BOOST_AUTO_TEST_SUITE_END(/* class__Zz */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__ZZ_CLASS_TEST_CASE_HXX */
