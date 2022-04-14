/*!
 * サンプルコード 00
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * FizzBuzz 演算の対象となる整数の範囲を表現するシーケンスコンテナ
 * @c FizzBuzzSequence と, 範囲 for 文を使用したもの. @n
 *
 * @file example-00a.c++
 * @see  fizz_buzzxx::IntegralSequence
 * @see  fizz_buzzxx::fizz_buzz
 */

#include <fizz-buzz++.h++>

#include <iostream>

/*!
 * FizzBuzz 問題の結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    using namespace fizz_buzzxx;

    // 1 ～ 100 の整数に対して FizzBuzz 演算を繰り返し, その結果を標準出力に出力する
    for (auto && fizz_buzz : FizzBuzzSequence { 1, 100 }) {
        std::cout << fizz_buzz() << std::endl;
    }
}
