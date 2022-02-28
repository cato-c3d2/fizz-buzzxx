/*!
 * @file fizz-buzz.class.test-case.h++
 */

#ifndef TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_TEST_CASE_HXX
#define TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_TEST_CASE_HXX

#include <fizz-buzz++/fizz-buzz.class.h++>

#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(namespace__fizz_buzzxx)

using namespace fizz_buzzxx;

BOOST_AUTO_TEST_SUITE(class__FizzBuzz)

BOOST_AUTO_TEST_CASE(default_construction)
{
    // デフォルト引数で FizzBuzz のオブジェクトを生成する
    FizzBuzz fizz_buzz;

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
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* class__FizzBuzz */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_TEST_CASE_HXX */
