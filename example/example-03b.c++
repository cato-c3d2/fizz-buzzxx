/*!
 * @file example-03b.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #03(b)
 *
 * FizzBuzz のルールを変更したサンプルコード. @n
 * 変更したルールは下記の通り : @n
 * - 文言 @c "Fizz" を出力する条件を「整数 @c n を @c 4 で割り切れる場合」とする
 * - 文言 @c "Buzz" を出力する条件を「整数 @c n を @c 6 で割り切れる場合」とする
 *
 * @see fizz_buzzxx::FizzBuzz
 * @see fizz_buzzxx::FizzBuzzSequence
 */

#include <fizz-buzz++.h++>

#include <iostream>
#include <iterator>

/*!
 * @brief FizzBuzz を実行し, その結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    using namespace fizz_buzzxx;

    // FizzBuzz の範囲とルールを設定したコンテナを生成する
    const FizzBuzzSequence sequence = {
        // FizzBuzz の範囲を 1 ～ 100 とする
        1,
        100,
        // FizzBuzz のルールを下記のように変更する :
        // - "Fizz" を出力する際の条件を "4 で割り切れる場合" とする
        // - "Buzz" を出力する際の条件を "6 で割り切れる場合" とする
        FizzBuzz { Fizz { 4 }, Buzz { 6 } }
    };

    // ルールを変更した FizzBuzz を繰り返し, その結果を標準出力に出力する
    for (auto && element : sequence) {
        std::cout << element << std::endl;
    }
}
