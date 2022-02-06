#ifndef FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX
#define FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Class definition / Class member declaration
//
////////////////////////////////////////////////////////////////////////////////

#include <string>

namespace fizz_buzzxx
{
    class FizzBuzz
    {
    public :
        static int         const default_fizz_divisor;
        static int         const default_buzz_divisor;
        static std::string const default_fizz_message;
        static std::string const default_buzz_message;

        FizzBuzz(
            int         = FizzBuzz::default_fizz_divisor,
            int         = FizzBuzz::default_buzz_divisor,
            std::string = FizzBuzz::default_fizz_message,
            std::string = FizzBuzz::default_buzz_message
        );

        auto operator () (int) const -> std::string;

        auto evaluate(int) const -> std::string;

    private :
        int         const _fizz_divisor;
        int         const _buzz_divisor;
        std::string const _fizz_message;
        std::string const _buzz_message;
    };
}

////////////////////////////////////////////////////////////////////////////////
//
// Class member definition
//
////////////////////////////////////////////////////////////////////////////////

namespace fizz_buzzxx
{
    int const FizzBuzz::default_fizz_divisor = 3;

    int const FizzBuzz::default_buzz_divisor = 5;

    std::string const FizzBuzz::default_fizz_message = "Fizz";

    std::string const FizzBuzz::default_buzz_message = "Buzz";

    FizzBuzz::FizzBuzz(
        int         const fizz_divisor,
        int         const buzz_divisor,
        std::string const fizz_message,
        std::string const buzz_message
    )
        : _fizz_divisor(fizz_divisor)
        , _buzz_divisor(buzz_divisor)
        , _fizz_message(fizz_message)
        , _buzz_message(buzz_message)
    {}

    auto FizzBuzz::operator () (int const value) const -> std::string
    {
        return this->evaluate(value);
    }

    auto FizzBuzz::evaluate(int const value) const -> std::string
    {
        if (value % (this->_fizz_divisor * this->_buzz_divisor) == 0) {
            return this->_fizz_message + ' ' + this->_buzz_message;
        } else if (value % this->_fizz_divisor == 0) {
            return this->_fizz_message;
        } else if (value % this->_buzz_divisor == 0) {
            return this->_buzz_message;
        }
        return std::to_string(value);
    }
}

#endif /* FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX */
