/*!
 * @file example-99z.c++
 *
 * @brief FizzBuzz 問題のサンプルコード #99(z)
 *
 * 番外編. @n
 * 当ライブラリを使用せず, 一般的な方法で FizzBuzz 問題を実装したサンプルコード. @n
 */

#include <iostream>

/*!
 * @brief FizzBuzz を実行し, その結果を標準出力に出力する
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
