#include <iostream>

auto main() -> int
{
    for (auto value = 1, last = 101; value < last; ++ value) {
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
    std::cout << std::endl;
}
