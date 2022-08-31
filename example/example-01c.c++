/*!
 * @file example-01c.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #01(c)
 *
 * クラス @c FizzBuzzSequence とイテレータを使用したサンプルコード. @n
 * イテレータの走査には @c std::for_each を使用している. @n
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
    std::for_each(
        std::begin(sequence), std::end(sequence), [&](auto && element) {
            std::cout << element << std::endl;
        });
}
