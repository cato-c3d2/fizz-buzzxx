/*!
 * サンプルコード 01(a)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * 入力となるシーケンスコンテナとして,
 * 固定長のシーケンスコンテナ @c std::array を使用したもの. @n
 *
 * @file example-01a.c++
 * @see  fizz_buzzxx::fizz_buzz
 */

#include <array>
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
    // 1 ～ 100 の整数を格納した固定長のシーケンスコンテナを生成する
    std::array<int, 100> sequence;
    for (auto index = 0; index < sequence.max_size(); ++index) {
        sequence[index] = index + 1;
    }

    // FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzzxx::fizz_buzz(
        std::begin(sequence), std::end(sequence), [&](auto const value) {
            std::cout << value << std::endl;
        });
}
