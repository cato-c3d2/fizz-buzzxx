/*!
 * サンプルコード 03(b)
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * FizzBuzz 問題のルールを下記のように変更したもの : @n
 * - 文言 @c "Fizz" を出力する条件を「整数 @c N を @c 4 で割り切れる場合」とする
 * - 文言 @c "Buzz" を出力する条件を「整数 @c N を @c 6 で割り切れる場合」とする
 *
 * @file example-03b.c++
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
        // - "Fizz" を出力する際の条件を "4 で割り切れる場合" とする
        // - "Buzz" を出力する際の条件を "6 で割り切れる場合" とする
        FizzBuzz { Fizz { 4 }, Buzz { 6 } }
    };

    // ルールを変更した FizzBuzz 問題の結果を標準出力に出力する
    for (auto && element : sequence) {
        std::cout << element << std::endl;
    }
}
