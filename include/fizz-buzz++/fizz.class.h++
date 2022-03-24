/*!
 * @file fizz.class.h++
 */

#ifndef FIZZ_BUZZXX__FIZZ_CLASS_HXX
#define FIZZ_BUZZXX__FIZZ_CLASS_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Class definition / Class member declaration
//
////////////////////////////////////////////////////////////////////////////////

#include <string>

namespace fizz_buzzxx
{
    /*!
     * FizzBuzz 演算の Fizz の部分を担うクラス
     */
    class Fizz
    {
    public:
        /*! Fizz の除数のデフォルト値 */
        static const int default_divisor;

        /*! Fizz の文言のデフォルト値 */
        static const std::string default_message;

        /*!
         * オブジェクトを生成する
         *
         * @param[in] divisor Fizz の除数
         * @param[in] message Fizz の文言
         */
        Fizz(
            int         divisor = Fizz::default_divisor,
            std::string message = Fizz::default_message);

    protected:
        const int         _divisor;
        const std::string _message;
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
    const int Fizz::default_divisor = 3;

    const std::string Fizz::default_message = "Fizz";

    Fizz::Fizz(const int divisor, const std::string message)
        : _divisor(divisor), _message(message)
    {
        if (divisor == 0) {
            throw std::invalid_argument("divisor is zero.");
        }
    }
}

#endif /* FIZZ_BUZZXX__FIZZ_CLASS_HXX */
