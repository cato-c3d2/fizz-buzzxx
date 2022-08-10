/*!
 * @file example-02a.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #02(a)
 *
 * FIZZBUZZ 演算の解を出力するストリームとして,
 * 文字列ストリーム @c std::ostringstream を使用したもの. @n
 *
 * @see fizz_buzzxx::FizzBuzzSequence
 */

#include <fizz-buzz++.h++>

#include <iostream>
#include <iterator>
#include <sstream>

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

    // FizzBuzz を繰り返し, その結果を文字列ストリームに出力する
    std::ostringstream out;
    for (auto && element : sequence) {
        out << element << std::endl;
    }

    // 文字列ストリームに出力した FizzBuzz の結果を標準出力に出力する
    std::cout << out.str();
}
