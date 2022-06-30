/*!
 * @file example-01b.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #01(b)
 *
 * @c FizzBuzzSequence と while 文を組み合わせたもの. @n
 *
 * @see fizz_buzzxx::FizzBuzzSequence
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

    // FizzBuzz 問題の対象範囲を 1 ～ 100 とする
    const FizzBuzzSequence sequence = { 1, 100 };

    // FizzBuzz 問題の結果を標準出力に出力する
    auto iterator = std::begin(sequence);
    while (iterator != std::end(sequence)) {
        std::cout << *(iterator++) << std::endl;
    }
}
