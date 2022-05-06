/*!
 * サンプルコード 10(a)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * イテレータの範囲に対して繰り返し処理を行う @c STL アルゴリズムとして,
 * @c std::for_each を使用したもの. @n
 *
 * @file example-10a.c++
 * @see  fizz_buzzxx::FizzBuzz
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

    // FizzBuzz 問題の対象範囲を 1 ～ 100 とする
    const FizzBuzzSequence sequence = { 1, 100 };

    // FizzBuzz 問題の結果を標準出力に出力する
    std::for_each(
        std::begin(sequence), std::end(sequence), [&](const auto value) {
            std::cout << value << std::endl;
        });
}
