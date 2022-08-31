/*!
 * @file example-03a.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #03(a)
 *
 * FizzBuzz のルールを変更したサンプルコード. @n
 * 変更したルールは下記の通り : @n
 * - 整数 @c n を @c 3 で割り切れる場合の文言を @c "Fizz++" とする
 * - 整数 @c n を @c 5 で割り切れる場合の文言を @c "Buzz++" とする
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
        // - 3 で割り切れる場合の文言を "Fizz++" とする
        // - 5 で割り切れる場合の文言を "Buzz++" とする
        FizzBuzz { Fizz { "Fizz++" }, Buzz { "Buzz++" } }
    };

    // ルールを変更した FizzBuzz を繰り返し, その結果を標準出力に出力する
    for (auto && element : sequence) {
        std::cout << element << std::endl;
    }
}
