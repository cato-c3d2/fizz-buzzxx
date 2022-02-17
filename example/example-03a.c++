/*!
 * サンプルコード 03(a)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * FizzBuzz 問題のルールを下記のように変更したもの : @n
 * - 整数 @c N を @c 3 で割り切れる場合の文言を @c "Fizz++" とする
 * - 整数 @c N を @c 5 で割り切れる場合の文言を @c "Buzz++" とする
 *
 * @file example-03a.c++
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

    // FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzzxx::fizz_buzz(
        std::begin(sequence),
        std::end(sequence),
        [&](auto const value) {
            std::cout << value << std::endl;
        },
        // 3 で割り切れる場合の文言を "Fizz++",
        // 5 で割り切れる場合の文言を "Buzz++" とする
        fizz_buzzxx::FizzBuzz {
            3, 5, "Fizz++", "Buzz++"
        }
    );
}