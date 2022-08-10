/*!
 * @file example-01a.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #01(a)
 *
 * @c FizzBuzzSequence と for 文を組み合わせたもの. @n
 *
 * @see fizz_buzzxx::FizzBuzzSequence
 */

#include <fizz-buzz++.h++>

#include <iostream>
#include <iterator>

/*!
 * @brief FizzBuzz を実行し, その結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    using namespace fizz_buzzxx;

    // FizzBuzz の範囲を 1 ～ 100 とする
    const FizzBuzzSequence sequence = { 1, 100 };

    // FizzBuzz を繰り返し, その結果を標準出力に出力する
    for (auto i = std::begin(sequence); i != std::end(sequence); ++i) {
        std::cout << *i << std::endl;
    }
}
