#include <iostream>
#include <iterator>
#include <vector>
#include <fizz-buzz++.h++>

auto main() -> int
{
    // 1 ～ 100 の整数を格納した可変長のシーケンスコンテナを生成する
    std::vector<int> sequence;
    for (auto index = 0; index < 100; ++ index) {
        sequence.push_back(index + 1);
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
