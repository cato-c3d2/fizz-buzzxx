/*!
 * サンプルコード 00
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * 整数の並びを表現するコンテナ @c IntegralSequence と,
 * イテレータの範囲に対して繰り返し FizzBuzz を評価するアルゴリズム
 * @c fizz_buzz を使用したもの. @n
 *
 * @file example-00.c++
 * @see  fizz_buzzxx::IntegralSequence
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
        }
    );
}
