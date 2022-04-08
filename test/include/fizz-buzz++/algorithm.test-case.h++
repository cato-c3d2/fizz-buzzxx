/*!
 * @file algorithm.test-case.h++
 */

#ifndef TEST__INCLUDE__FIZZ_BUZZXX__ALGORITHM_TEST_CASE_HXX
#define TEST__INCLUDE__FIZZ_BUZZXX__ALGORITHM_TEST_CASE_HXX

#include <fizz-buzz++/algorithm.h++>

#include <array>
#include <functional>
#include <string>
#include <vector>

BOOST_AUTO_TEST_SUITE(namespace__fizz_buzzxx)

using namespace fizz_buzzxx;

BOOST_AUTO_TEST_SUITE(function__fizz_buzz)

/*!
 * テストパターン :
 * FizzBuzz 演算を行う関数オブジェクトとして,
 * デフォルトの関数オブジェクト FizzBuzz を使用する
 *
 * @see fizz_buzzxx::fizz_buzz()
 */
BOOST_AUTO_TEST_CASE(default_operation)
{
    // 入力イテレータの元となるコンテナを用意する
    std::array<int, 15> input = {};
    for (auto i = 0; i < input.size(); ++i) {
        input[i] = i + 1;
    }

    // clang-format off
          auto first = input.begin();
    const auto last  = input.end();
    // clang-format on

    // 【事前条件】
    // 入力イテレータ first と last は等しくないこと
    BOOST_CHECK(first != last);

    // 処理結果を格納するコンテナ
    std::vector<std::string> output = {};

    // 文字列 value をコンテナ output に格納する関数
    const std::function<void(std::string)> callback
        = [&output](const std::string value) {
              output.push_back(value);
          };

    // 入力イテレータ first が指し示す整数 n に関数 FizzBuzz::operator() を適用し,
    // 文字列 value を得る.
    // 次に, 文字列 value をコンテナ output に格納する.
    // 以上の処理を (first, last] の範囲に適用する.
    fizz_buzz(first, last, callback);

    // 【事後条件】
    // 入力イテレータ first と last は等しくないこと.
    // NOTE 関数 fizz_buzz は入力イテレータのコピーを引数とするため,
    //      呼び出し元の入力イテレータは,
    //      関数 fizz_buzz の内部で行われた入力イテレータの操作の影響を受けない.
    BOOST_CHECK(first != last);

    // 【検証】
    // コンテナ input 及び output に格納された値が期待結果と一致すること

    // clang-format off
    BOOST_CHECK_EQUAL( input.size(), 15);
    BOOST_CHECK_EQUAL(output.size(), 15);
    BOOST_CHECK_EQUAL(input[ 0],  1);
    BOOST_CHECK_EQUAL(input[ 1],  2);
    BOOST_CHECK_EQUAL(input[ 2],  3);
    BOOST_CHECK_EQUAL(input[ 3],  4);
    BOOST_CHECK_EQUAL(input[ 4],  5);
    BOOST_CHECK_EQUAL(input[ 5],  6);
    BOOST_CHECK_EQUAL(input[ 6],  7);
    BOOST_CHECK_EQUAL(input[ 7],  8);
    BOOST_CHECK_EQUAL(input[ 8],  9);
    BOOST_CHECK_EQUAL(input[ 9], 10);
    BOOST_CHECK_EQUAL(input[10], 11);
    BOOST_CHECK_EQUAL(input[11], 12);
    BOOST_CHECK_EQUAL(input[12], 13);
    BOOST_CHECK_EQUAL(input[13], 14);
    BOOST_CHECK_EQUAL(input[14], 15);
    BOOST_CHECK_EQUAL(output[ 0], "1"        );
    BOOST_CHECK_EQUAL(output[ 1], "2"        );
    BOOST_CHECK_EQUAL(output[ 2], "Fizz"     );
    BOOST_CHECK_EQUAL(output[ 3], "4"        );
    BOOST_CHECK_EQUAL(output[ 4], "Buzz"     );
    BOOST_CHECK_EQUAL(output[ 5], "Fizz"     );
    BOOST_CHECK_EQUAL(output[ 6], "7"        );
    BOOST_CHECK_EQUAL(output[ 7], "8"        );
    BOOST_CHECK_EQUAL(output[ 8], "Fizz"     );
    BOOST_CHECK_EQUAL(output[ 9], "Buzz"     );
    BOOST_CHECK_EQUAL(output[10], "11"       );
    BOOST_CHECK_EQUAL(output[11], "Fizz"     );
    BOOST_CHECK_EQUAL(output[12], "13"       );
    BOOST_CHECK_EQUAL(output[13], "14"       );
    BOOST_CHECK_EQUAL(output[14], "Fizz Buzz");
    // clang-format on
}

/*!
 * テストパターン :
 * FizzBuzz 演算を行う関数オブジェクトとして,
 * Fizz/Buzz の除数及び文言を変更した関数オブジェクト FizzBuzz を使用する
 *
 * @see fizz_buzzxx::fizz_buzz()
 */
BOOST_AUTO_TEST_CASE(custom_operation)
{
    // 入力イテレータの元となるコンテナを用意する
    std::array<int, 15> input = {};
    for (auto i = 0; i < input.size(); ++i) {
        input[i] = i + 1;
    }

    // clang-format off
          auto first = input.begin();
    const auto last  = input.end();
    // clang-format on

    // 【事前条件】
    // 入力イテレータ first と last は等しくないこと
    BOOST_CHECK(first != last);

    // 処理結果を格納するコンテナ
    std::vector<std::string> output = {};

    // 文字列 value をコンテナ output に格納する関数
    const std::function<void(std::string)> callback
        = [&output](const std::string value) {
              output.push_back(value);
          };

    // Fizz の除数として 4 を,
    // Buzz の除数として 6 を,
    // Fizz の文言として "fizz++" を,
    // Buzz の文言として "buzz++" を指定した関数オブジェクト FizzBuzz を生成する
    FizzBuzz operate { Fizz { 4, "fizz++" }, Buzz { 6, "buzz++" } };

    // 入力イテレータ first が指し示す整数 n に関数 FizzBuzz::operator() を適用し,
    // 文字列 value を得る.
    // 次に, 文字列 value をコンテナ output に格納する.
    // 以上の処理を (first, last] の範囲に適用する.
    fizz_buzz(first, last, callback, operate);

    // 【事後条件】
    // 入力イテレータ first と last は等しくないこと.
    // NOTE 関数 fizz_buzz は入力イテレータのコピーを引数とするため,
    //      呼び出し元の入力イテレータは,
    //      関数 fizz_buzz の内部で行われた入力イテレータの操作の影響を受けない.
    BOOST_CHECK(first != last);

    // 【検証】
    // コンテナ input 及び output に格納された値が期待結果と一致すること

    // clang-format off
    BOOST_CHECK_EQUAL( input.size(), 15);
    BOOST_CHECK_EQUAL(output.size(), 15);
    BOOST_CHECK_EQUAL(input[ 0],  1);
    BOOST_CHECK_EQUAL(input[ 1],  2);
    BOOST_CHECK_EQUAL(input[ 2],  3);
    BOOST_CHECK_EQUAL(input[ 3],  4);
    BOOST_CHECK_EQUAL(input[ 4],  5);
    BOOST_CHECK_EQUAL(input[ 5],  6);
    BOOST_CHECK_EQUAL(input[ 6],  7);
    BOOST_CHECK_EQUAL(input[ 7],  8);
    BOOST_CHECK_EQUAL(input[ 8],  9);
    BOOST_CHECK_EQUAL(input[ 9], 10);
    BOOST_CHECK_EQUAL(input[10], 11);
    BOOST_CHECK_EQUAL(input[11], 12);
    BOOST_CHECK_EQUAL(input[12], 13);
    BOOST_CHECK_EQUAL(input[13], 14);
    BOOST_CHECK_EQUAL(input[14], 15);
    BOOST_CHECK_EQUAL(output[ 0], "1"            );
    BOOST_CHECK_EQUAL(output[ 1], "2"            );
    BOOST_CHECK_EQUAL(output[ 2], "3"            );
    BOOST_CHECK_EQUAL(output[ 3], "fizz++"       );
    BOOST_CHECK_EQUAL(output[ 4], "5"            );
    BOOST_CHECK_EQUAL(output[ 5], "buzz++"       );
    BOOST_CHECK_EQUAL(output[ 6], "7"            );
    BOOST_CHECK_EQUAL(output[ 7], "fizz++"       );
    BOOST_CHECK_EQUAL(output[ 8], "9"            );
    BOOST_CHECK_EQUAL(output[ 9], "10"           );
    BOOST_CHECK_EQUAL(output[10], "11"           );
    BOOST_CHECK_EQUAL(output[11], "fizz++ buzz++");
    BOOST_CHECK_EQUAL(output[12], "13"           );
    BOOST_CHECK_EQUAL(output[13], "14"           );
    BOOST_CHECK_EQUAL(output[14], "15"           );
    // clang-format on
}

BOOST_AUTO_TEST_SUITE_END(/* function__fizz_buzz */)

BOOST_AUTO_TEST_SUITE_END(/* namespace__fizz_buzzxx */)

#endif /* TEST__INCLUDE__FIZZ_BUZZXX__ALGORITHM_TEST_CASE_HXX */
