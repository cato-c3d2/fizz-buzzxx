/*!
 * @file example-02b.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #02(b)
 *
 * FizzBuzz の出力内容を変更したサンプルコード. @n
 * 出力する書式について,
 * 要素間の区切りを改行からカンマ(+半角スペース)に変更した. @n
 *
 * @see fizz_buzzxx::FizzBuzzSequence
 */

#include <fizz-buzz++.h++>

#include <iostream>
#include <iterator>
#include <string>

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
    std::string delimiter = "";
    for (auto && element : sequence) {
        std::cout << delimiter << element;
        // 要素間の区切りをカンマ(+半角スペース)とする
        delimiter = ", ";
    }
    std::cout << std::endl;
}
