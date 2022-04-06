/*!
 * サンプルコード 01(c)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * 入力となるシーケンスコンテナとして, @c int の配列を使用したもの. @n
 *
 * @file example-01c.c++
 * @see  fizz_buzzxx::fizz_buzz
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

    // 1 ～ 100 の整数を格納した配列を生成する
    std::size_t constexpr size = 100;
    int sequence[size] {};
    for (auto index = 0; index < size; ++index) {
        sequence[index] = index + 1;
    }

    // FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzz(std::begin(sequence), std::end(sequence), [&](const auto value) {
        std::cout << value << std::endl;
    });
}
