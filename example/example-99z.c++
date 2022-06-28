/*!
 * @brief サンプルコード 99
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * 一般的な方法で FizzBuzz 問題を実装したもの. @n
 *
 * @file example-99z.c++
 */

#include <iostream>

/*!
 * @brief FizzBuzz 問題の結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    for (int n = 1, last = 101; n < last; ++n) {
        if (n % (3 * 5) == 0) {
            std::cout << "Fizz Buzz";
        } else if (n % 3 == 0) {
            std::cout << "Fizz";
        } else if (n % 5 == 0) {
            std::cout << "Buzz";
        } else {
            std::cout << n;
        }
        std::cout << std::endl;
    }
}
