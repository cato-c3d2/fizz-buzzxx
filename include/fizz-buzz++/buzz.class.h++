/*!
 * @file buzz.class.h++
 */

#ifndef FIZZ_BUZZXX__BUZZ_CLASS_HXX
#define FIZZ_BUZZXX__BUZZ_CLASS_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Class definition / Class member declaration
//
////////////////////////////////////////////////////////////////////////////////

#include <fizz-buzz++/fizz.class.h++>

#include <string>

namespace fizz_buzzxx
{
    /*!
     * FizzBuzz 演算の Buzz の部分を担うクラス
     */
    class Buzz : public Zz
    {
    public:
        /*! Buzz の除数のデフォルト値 */
        static const int default_divisor;

        /*! Buzz の文言のデフォルト値 */
        static const std::string default_message;

        /*!
         * オブジェクトを生成する
         *
         * @param[in] divisor Buzz の除数
         * @param[in] message Buzz の文言
         */
        Buzz(
            int         divisor = Buzz::default_divisor,
            std::string message = Buzz::default_message);
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
    const int Buzz::default_divisor = 5;

    const std::string Buzz::default_message = "Buzz";

    Buzz::Buzz(const int divisor, const std::string message)
        : Zz(divisor, message)
    {}
}

#endif /* FIZZ_BUZZXX__BUZZ_CLASS_HXX */
