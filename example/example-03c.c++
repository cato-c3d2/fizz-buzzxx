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

#include <iostream>
#include <iterator>
#include <fizz-buzz++.h++>

/*!
 * FizzBuzz 問題の結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    // 1 ～ 100 の整数の並びを表現するコンテナを生成する
    fizz_buzzxx::IntegralSequence const sequence(1, 100);

    // ルールを変更した FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzzxx::fizz_buzz(
        std::begin(sequence),
        std::end(sequence),
        [&](auto const value) {
            std::cout << value << std::endl;
        },
        // 4 で割り切れる場合に "Fizz++" を出力し,
        // 6 で割り切れる場合に "Buzz++" を出力する
        fizz_buzzxx::FizzBuzz {
            4, 6, "Fizz++", "Buzz++"
        }
    );
}
