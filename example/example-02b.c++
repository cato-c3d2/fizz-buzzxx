/*!
 * サンプルコード 02(b)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * FizzBuzz 問題の出力の書式について,
 * 要素間の区切りをカンマ(+半角スペース)に変更したもの. @n
 *
 * @file example-02b.c++
 * @see  fizz_buzzxx::FizzBuzzSequence
 */

#include <fizz-buzz++.h++>

#include <iostream>
#include <iterator>
#include <string>

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
    std::string delimiter = "";
    for (const auto & value : sequence) {
        std::cout << delimiter << value;
        // 要素間の区切りをカンマ(+半角スペース)とする
        delimiter = ", ";
    }
    std::cout << std::endl;
}
