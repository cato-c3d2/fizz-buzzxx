#include <iostream>
#include <iterator>
#include <fizz-buzz++.h++>

auto main() -> int
{
    // 1 ～ 100 の整数の並びを表現するコンテナを生成する
    fizz_buzzxx::IntegralSequence const sequence(1, 100);

    // FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzzxx::fizz_buzz(
        std::begin(sequence),
        std::end(sequence),
        [&](auto const value) {
            std::cout << value << std::endl;
        },
        // 3 で割り切れる場合の文言を "Fizz++",
        // 5 で割り切れる場合の文言を "Buzz++" とする
        fizz_buzzxx::FizzBuzz {
            3, 5, "Fizz++", "Buzz++"
        }
    );
    std::cout << std::endl;
}
