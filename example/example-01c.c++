#include <iostream>
#include <iterator>
#include <fizz-buzz++.h++>

auto main() -> int
{
    // 1 ～ 100 の整数を格納した配列を生成する
    std::size_t constexpr size = 100;
    int sequence[size];
    for (auto index = 0; index < size; ++ index) {
        sequence[index] = index + 1;
    }

    // FizzBuzz 問題の結果を標準出力に出力する
    fizz_buzzxx::fizz_buzz(
        std::begin(sequence),
        std::end(sequence),
        [&](auto const value) {
            std::cout << value << std::endl;
        }
    );
}
