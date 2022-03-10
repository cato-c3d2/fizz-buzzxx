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

#include <string>

namespace fizz_buzzxx
{
    /*!
     * FizzBuzz を評価する関数オブジェクト
     */
    class FizzBuzz
    {
    public:
        /*! Fizz の除数のデフォルト値 */
        static const int default_fizz_divisor;

        /*! Buzz の除数のデフォルト値 */
        static const int default_buzz_divisor;

        /*! Fizz の文言のデフォルト値 */
        static const std::string default_fizz_message;

        /*! Buzz の文言のデフォルト値 */
        static const std::string default_buzz_message;

        /*!
         * 関数オブジェクトを生成する
         *
         * @param[in] fizz_divisor Fizz の除数
         * @param[in] buzz_divisor Buzz の除数
         * @param[in] fizz_message Fizz の文言
         * @param[in] buzz_message Buzz の文言
         */
        FizzBuzz(
            int         fizz_divisor = FizzBuzz::default_fizz_divisor,
            int         buzz_divisor = FizzBuzz::default_buzz_divisor,
            std::string fizz_message = FizzBuzz::default_fizz_message,
            std::string buzz_message = FizzBuzz::default_buzz_message);

        /*!
         * 関数呼び出し演算
         *
         * @param[in] value FizzBuzz の値を求める整数
         * @return FizzBuzz の値を返却する @n
         *         FizzBuzz の値が整数 @c value の場合は,
         *         整数 @c value を文字列に変換して返却する
         *
         * @see evaluate()
         */
        auto operator()(int value) const -> std::string;

        /*!
         * 引数として与えられた整数に対する FizzBuzz の値を求める
         *
         * @param[in] value FizzBuzz の値を求める整数
         *
         * @return FizzBuzz の値を返却する @n
         *         FizzBuzz の値が整数 @c value の場合は,
         *         整数 @c value を文字列に変換して返却する
         *
         * @see operator()()
         */
        auto evaluate(int value) const -> std::string;

    private:
        const int         _fizz_divisor;
        const int         _buzz_divisor;
        const std::string _fizz_message;
        const std::string _buzz_message;
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
    const int FizzBuzz::default_fizz_divisor = 3;

    const int FizzBuzz::default_buzz_divisor = 5;

    const std::string FizzBuzz::default_fizz_message = "Fizz";

    const std::string FizzBuzz::default_buzz_message = "Buzz";

    FizzBuzz::FizzBuzz(
        const int         fizz_divisor,
        const int         buzz_divisor,
        const std::string fizz_message,
        const std::string buzz_message)
        : _fizz_divisor(fizz_divisor)
        , _buzz_divisor(buzz_divisor)
        , _fizz_message(fizz_message)
        , _buzz_message(buzz_message)
    {
        if (fizz_divisor == 0) {
            throw std::invalid_argument("fizz_divisor is zero.");
        }
        if (buzz_divisor == 0) {
            throw std::invalid_argument("buzz_divisor is zero.");
        }
    }

    auto FizzBuzz::operator()(const int value) const -> std::string
    {
        return this->evaluate(value);
    }

    auto FizzBuzz::evaluate(const int value) const -> std::string
    {
        std::string message      = "";
        std::string delimiter    = "";
        bool        is_divisible = false;
        if (value % this->_fizz_divisor == 0) {
            message      = this->_fizz_message;
            delimiter    = " ";
            is_divisible = true;
        }
        if (value % this->_buzz_divisor == 0) {
            message += delimiter + this->_buzz_message;
            is_divisible = true;
        }
        if (is_divisible) {
            return message;
        }
        return std::to_string(value);
    }
}

#endif /* FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX */
