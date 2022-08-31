/*!
 * @file example-00a.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #00(a)
 *
 * 当ライブラリの最も基本的な使用方法を想定したサンプルコード. @n
 * クラス @c FizzBuzzSequence と範囲 for 文を使用している. @n
 *
 * @see fizz_buzzxx::FizzBuzzSequence
 */

#include <fizz-buzz++.h++>

#include <iostream>

/*!
 * @brief FizzBuzz を実行し, その結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    using namespace fizz_buzzxx;

    // 1 ～ 100 の整数に対して FizzBuzz を繰り返し, その結果を標準出力に出力する
    for (auto && fizz_buzz : FizzBuzzSequence { 1, 100 }) {
        std::cout << fizz_buzz << std::endl;
    }
}
