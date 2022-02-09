#include <iostream>
#include <iterator>
#include <sstream>
#include <fizz-buzz++.h++>

auto main() -> int
{
    // 1 ～ 100 の整数の並びを表現するコンテナを生成する
    fizz_buzzxx::IntegralSequence const sequence(1, 100);

    // FizzBuzz 問題の結果を文字列ストリームに出力する
    std::ostringstream out;
    fizz_buzzxx::fizz_buzz(
        std::begin(sequence),
        std::end(sequence),
        [&](auto const value) {
            out << value << std::endl;
        }
    );

    // 文字列ストリームに出力した FizzBuzz 問題の結果を標準出力に出力する
    std::cout << out.str() << std::endl;
}
