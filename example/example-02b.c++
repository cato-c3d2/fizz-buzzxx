/*!
 * サンプルコード 02(b)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * FizzBuzz 問題の出力の書式について,
 * 要素間の区切りをカンマ(+半角スペース)に変更したもの. @n
 *
 * @file example-02b.c++
 * @see  fizz_buzzxx::IntegralSequence
 * @see  fizz_buzzxx::fizz_buzz
 */

#include <iostream>
#include <iterator>
#include <string>
#include <fizz-buzz++.h++>

/*!
 * FizzBuzz 問題の結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    // 1 ～ 100 の整数の並びを表現するコンテナを生成する
    fizz_buzzxx::IntegralSequence const sequence(1, 100);

    // FizzBuzz 問題の結果を標準出力に出力する
    std::string delimiter = "";
    fizz_buzzxx::fizz_buzz(
        std::begin(sequence),
        std::end(sequence),
        [&](auto const value) {
            std::cout << delimiter << value;
            // 要素間の区切りをカンマ(+半角スペース)とする
            delimiter = ", ";
        }
    );
    std::cout << std::endl;
}
