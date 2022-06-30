/*!
 * @file example-00a.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #00(a)
 *
 * @c FizzBuzzSequence と 範囲 for 文を使用したもの. @n
 *
 * @see fizz_buzzxx::FizzBuzzSequence
 */

#include <fizz-buzz++.h++>

#include <iostream>

/*!
 * @brief FizzBuzz 問題の結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    using namespace fizz_buzzxx;

    // 1 ～ 100 の整数に対して FizzBuzz 演算を繰り返し, その結果を標準出力に出力する
    for (auto && fizz_buzz : FizzBuzzSequence { 1, 100 }) {
        std::cout << fizz_buzz << std::endl;
    }
}
