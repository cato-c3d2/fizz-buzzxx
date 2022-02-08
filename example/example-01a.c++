#include <array>
#include <iostream>
#include <iterator>
#include <fizz-buzz++.h++>

auto main() -> int
{
    // 1 ～ 100 の整数を格納した固定長のシーケンスコンテナを生成する
    std::array<int, 100> sequence;
    for (auto index = 0; index < sequence.max_size(); ++ index) {
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
    std::cout << std::endl;
}
