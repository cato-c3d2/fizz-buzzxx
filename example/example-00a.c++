/*!
 * サンプルコード 00
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * 整数の並びを表現するコンテナ @c IntegralSequence と,
 * イテレータの範囲に対して FizzBuzz 演算を繰り返すアルゴリズム
 * @c fizz_buzz を使用したもの. @n
 *
 * @file example-00a.c++
 * @see  fizz_buzzxx::IntegralSequence
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
    const IntegralSequence sequence = { 1, 100 };

    // FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzz(std::begin(sequence), std::end(sequence), [&](const auto value) {
        std::cout << value << std::endl;
    });
}
