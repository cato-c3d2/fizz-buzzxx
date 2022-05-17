/*!
 * サンプルコード 02(a)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * FizzBuzz の値を出力するストリームとして,
 * 文字列ストリーム @c std::ostringstream を使用したもの. @n
 *
 * @file example-02a.c++
 * @see  fizz_buzzxx::FizzBuzzSequence
 */

#include <fizz-buzz++.h++>

#include <iostream>
#include <iterator>
#include <sstream>

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

    // FizzBuzz 問題の結果を文字列ストリームに出力する
    std::ostringstream out;
    for (const auto & value : sequence) {
        out << value << std::endl;
    }

    // 文字列ストリームに出力した FizzBuzz 問題の結果を標準出力に出力する
    std::cout << out.str();
}
