#include <iostream>
#include <iterator>
#include <fizz-buzz++.h++>

auto main() -> int
{
    // 1 ～ 100 の整数の並びを表現するコンテナを生成する
    fizz_buzzxx::IntegralSequence const sequence(1, 100);

    // ルールを変更した FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzzxx::fizz_buzz(
        std::begin(sequence),
        std::end(sequence),
        [&](auto const value) {
            std::cout << value << std::endl;
        },
        // "Fizz" を出力する際の条件を "4 で割り切れる場合" とし,
        // "Buzz" を出力する際の条件を "6 で割り切れる場合" とする
        fizz_buzzxx::FizzBuzz {
            4, 6, "Fizz", "Buzz"
        }
    );
}
