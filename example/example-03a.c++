/*!
 * サンプルコード 03(a)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * FizzBuzz 問題のルールを下記のように変更したもの : @n
 * - 整数 @c N を @c 3 で割り切れる場合の文言を @c "Fizz++" とする
 * - 整数 @c N を @c 5 で割り切れる場合の文言を @c "Buzz++" とする
 *
 * @file example-03a.c++
 * @see  fizz_buzzxx::FizzBuzz
 * @see  fizz_buzzxx::FizzBuzzSequence
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

    // FizzBuzz 問題の対象範囲とルールを設定したコンテナを生成する
    const FizzBuzzSequence sequence = {
        // FizzBuzz 問題の対象範囲を 1 ～ 100 とする
        1,
        100,
        // FizzBuzz 問題のルールを下記のように変更する :
        // - 3 で割り切れる場合の文言を "Fizz++" とする
        // - 5 で割り切れる場合の文言を "Buzz++" とする
        FizzBuzz { Fizz { "Fizz++" }, Buzz { "Buzz++" } }
    };

    // ルールを変更した FizzBuzz 問題の結果を標準出力に出力する
    for (auto && element : sequence) {
        std::cout << element << std::endl;
    }
}
