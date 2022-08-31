/*!
 * @file example-01b.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #01(b)
 *
 * クラス @c FizzBuzzSequence とイテレータを使用したサンプルコード. @n
 * イテレータの走査には while 文を使用している. @n
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
    auto iterator = std::begin(sequence);
    while (iterator != std::end(sequence)) {
        std::cout << *(iterator++) << std::endl;
    }
}
