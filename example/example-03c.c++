/*!
 * サンプルコード 03(c)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * FizzBuzz 問題のルールを下記のように変更したもの : @n
 * - 整数 @c N を @c 4 で割り切れる場合に文言 @c "Fizz++" を出力する
 * - 整数 @c N を @c 6 で割り切れる場合に文言 @c "Buzz++" を出力する
 *
 * @file example-03c.c++
 * @see  fizz_buzzxx::IntegralSequence
 * @see  fizz_buzzxx::FizzBuzz
 * @see  fizz_buzzxx::fizz_buzz
 */

#include <fizz-buzz++.h++>

#include <iostream>
#include <iterator>

/*!
 * FizzBuzz 問題の結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    using namespace fizz_buzzxx;

    // 1 ～ 100 の整数の並びを表現するコンテナを生成する
    const IntegralSequence sequence { 1, 100 };

    // ルールを変更した FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzz(
        std::begin(sequence),
        std::end(sequence),
        [&](const auto value) {
            std::cout << value << std::endl;
        },
        // 4 で割り切れる場合に "Fizz++" を出力し,
        // 6 で割り切れる場合に "Buzz++" を出力する
        FizzBuzz { Fizz { 4, "Fizz++" }, Buzz { 6, "Buzz++" } });
}
