/*!
 * サンプルコード 10(a)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * イテレータの範囲に対して繰り返し処理を行う @c STL アルゴリズムとして,
 * @c std::for_each を使用したもの. @n
 *
 * @file example-10a.c++
 * @see  fizz_buzzxx::IntegralSequence
 * @see  fizz_buzzxx::FizzBuzz
 */

#include <iostream>
#include <iterator>
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

    // 与えられた整数の "FizzBuzz" を評価する関数オブジェクトを生成する
    fizz_buzzxx::FizzBuzz fizz_buzz;

    // FizzBuzz 問題の結果を標準出力に出力する
    std::for_each(
        std::begin(sequence),
        std::end(sequence),
        [&](auto const value) {
            std::cout << fizz_buzz(value) << std::endl;
        }
    );
}