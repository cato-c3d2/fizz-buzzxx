#include <iostream>
#include <iterator>
#include <fizz-buzz++.h++>

auto main() -> int
{
    // 1 ～ 100 の整数の並びを表現するコンテナを生成する
    fizz_buzzxx::IntegralSequence const sequence(1, 100);

    // 与えられた整数の "FizzBuzz" を評価する関数オブジェクトを生成する
    fizz_buzzxx::FizzBuzz fizz_buzz;

    // FizzBuzz 問題の結果を標準出力に出力する
    std::for_each(
        std::begin(sequence),
        std::end(sequence),
        [&](auto const value) {
            std::cout << fizz_buzz(value) << std::endl;
        }
    );
}
