/*!
 * サンプルコード 99
 *
 * FizzBuzz 問題の結果を標準出力に出力するサンプルコード. @n
 *
 * 一般的な方法で FizzBuzz 問題を実装したもの. @n
 *
 * @file example-99.c++
 */

#include <iostream>

/*!
 * FizzBuzz 問題の結果を標準出力に出力する
 *
 * @return プログラムのリターンコード @n
 *         常に @c 0 を返却する
 */
auto main() -> int
{
    for (auto value = 1, last = 101; value < last; ++value) {
        if (value % (3 * 5) == 0) {
            std::cout << "Fizz Buzz" << std::endl;
        } else if (value % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        } else if (value % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << value << std::endl;
        }
    }
}
