/*!
 * サンプルコード 01(b)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * 入力となるシーケンスコンテナとして,
 * 可変長のシーケンスコンテナ @c std::vector を使用したもの. @n
 *
 * @file example-01b.c++
 * @see  fizz_buzzxx::fizz_buzz
 */

#include <fizz-buzz++.h++>

#include <iostream>
#include <iterator>
#include <vector>

/*!
 * FizzBuzz 問題の結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    using namespace fizz_buzzxx;

    // 1 ～ 100 の整数を格納した可変長のシーケンスコンテナを生成する
    std::vector<int> sequence = {};
    for (auto index = 0; index < 100; ++index) {
        sequence.push_back(index + 1);
    }

    // FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzz(std::begin(sequence), std::end(sequence), [&](const auto value) {
        std::cout << value << std::endl;
    });
}
