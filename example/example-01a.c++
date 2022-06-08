/*!
 * サンプルコード 01(a)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * @c FizzBuzzSequence 及び
 * @c FizzBuzzSequence::Iterator, @c FizzBuzzSequence::Element と
 * for 文を組み合わせたもの. @n
 *
 * @file example-01a.c++
 * @see  fizz_buzzxx::FizzBuzzSequence
 * @see  fizz_buzzxx::FizzBuzzSequence::Iterator
 * @see  fizz_buzzxx::FizzBuzzSequence::Element
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
    for (auto i = std::begin(sequence); i != std::end(sequence); ++i) {
        std::cout << *i << std::endl;
    }
}
