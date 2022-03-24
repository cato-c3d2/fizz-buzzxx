/*!
 * @file fizz-buzz.class.h++
 */

#ifndef FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX
#define FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Class definition / Class member declaration
//
////////////////////////////////////////////////////////////////////////////////

#include <fizz-buzz++/buzz.class.h++>
#include <fizz-buzz++/fizz.class.h++>

#include <string>

namespace fizz_buzzxx
{
    /*!
     * FizzBuzz 演算を行う関数オブジェクト
     */
    class FizzBuzz : public Fizz, public Buzz
    {
    public:
        /*!
         * 関数オブジェクトを生成する
         *
         * @param[in] fizz_divisor Fizz の除数
         * @param[in] buzz_divisor Buzz の除数
         * @param[in] fizz_message Fizz の文言
         * @param[in] buzz_message Buzz の文言
         */
        FizzBuzz(
            int         fizz_divisor = Fizz::default_divisor,
            int         buzz_divisor = Buzz::default_divisor,
            std::string fizz_message = Fizz::default_message,
            std::string buzz_message = Buzz::default_message);

        /*!
         * 関数呼び出し演算
         *
         * @param[in] n FizzBuzz の値を求める整数
         * @return FizzBuzz の値を返却する @n
         *         FizzBuzz の値が整数 @c n の場合は,
         *         整数 @c n を文字列に変換して返却する
         */
        auto operator()(int n) const -> std::string;
    };
}

////////////////////////////////////////////////////////////////////////////////
//
// Class member definition
//
////////////////////////////////////////////////////////////////////////////////

#include <stdexcept>

namespace fizz_buzzxx
{
    FizzBuzz::FizzBuzz(
        const int         fizz_divisor,
        const int         buzz_divisor,
        const std::string fizz_message,
        const std::string buzz_message)
        : Fizz(fizz_divisor, fizz_message), Buzz(buzz_divisor, buzz_message)
    {}

    auto FizzBuzz::operator()(const int n) const -> std::string
    {
        std::string message      = "";
        std::string delimiter    = "";
        bool        is_divisible = false;
        if (n % this->Fizz::_divisor == 0) {
            message      = this->Fizz::_message;
            delimiter    = " ";
            is_divisible = true;
        }
        if (n % this->Buzz::_divisor == 0) {
            message += delimiter + this->Buzz::_message;
            is_divisible = true;
        }
        if (is_divisible) {
            return message;
        }
        return std::to_string(n);
    }
}

#endif /* FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX */
