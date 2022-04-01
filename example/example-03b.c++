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
 * @see  fizz_buzzxx::IntegralSequence
 * @see  fizz_buzzxx::FizzBuzz
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

    // 1 ～ 100 の整数の並びを表現するコンテナを生成する
    const IntegralSequence sequence(1, 100);

    // ルールを変更した FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzz(
        std::begin(sequence),
        std::end(sequence),
        [&](const auto value) {
            std::cout << value << std::endl;
        },
        // "Fizz" を出力する際の条件を "4 で割り切れる場合" とし,
        // "Buzz" を出力する際の条件を "6 で割り切れる場合" とする
        FizzBuzz { Fizz { 4 }, Buzz { 6 } });
}
