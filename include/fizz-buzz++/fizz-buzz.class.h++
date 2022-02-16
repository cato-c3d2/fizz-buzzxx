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
    public :
        /*! Fizz の除数のデフォルト値 */
        static int const default_fizz_divisor;

        /*! Buzz の除数のデフォルト値 */
        static int const default_buzz_divisor;

        /*! Fizz の文言のデフォルト値 */
        static std::string const default_fizz_message;

        /*! Buzz の文言のデフォルト値 */
        static std::string const default_buzz_message;

        /*!
         * 関数オブジェクトを生成する
         *
         * @param[in] fizz_divisor Fizz の除数
         * @param[in] buzz_divisor Buzz の除数
         * @param[in] fizz_message Fizz の文言
         * @param[in] buzz_message Buzz の文言
         */
        FizzBuzz(
            int         = FizzBuzz::default_fizz_divisor,
            int         = FizzBuzz::default_buzz_divisor,
            std::string = FizzBuzz::default_fizz_message,
            std::string = FizzBuzz::default_buzz_message
        );

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
        auto operator () (int) const -> std::string;

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
        std::string message   = "";
        std::string delimiter = "";
        if (value % this->_fizz_divisor == 0) {
            message   = this->_fizz_message;
            delimiter = " ";
        }
        if (value % this->_buzz_divisor == 0) {
            message += delimiter + this->_buzz_message;
        }
        if (message != "") {
            return message;
        }
        return std::to_string(value);
    }
}

#endif /* FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX */
