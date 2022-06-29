/*!
 * @file example-10a.c++
 *
 * @brief サンプルコード 10(a)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * @c FizzBuzz と for 文を使用したもの. @n
 *
 * @see fizz_buzzxx::FizzBuzz
 */

#include <fizz-buzz++.h++>

#include <iostream>
#include <iterator>

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
    const FizzBuzz fizz_buzz;
    for (auto i = 1; i <= 100; i++) {
        std::cout << fizz_buzz(i) << std::endl;
    }
}
