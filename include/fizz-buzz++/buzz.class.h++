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
     * @brief BUZZ 演算を行う関数オブジェクト
     */
    class Buzz : public Zz
    {
    public:
        /*! @brief BUZZ 除数のデフォルト値 */
        static const int default_divisor;

        /*! @brief BUZZ 文言のデフォルト値 */
        static const std::string default_message;

        /*!
         * @brief 関数オブジェクトを生成する
         *
         * @param[in] divisor BUZZ 除数
         * @param[in] message BUZZ 文言
         */
        Buzz(
            int         divisor = Buzz::default_divisor,
            std::string message = Buzz::default_message);

        /*!
         * @brief 関数オブジェクトを生成する
         *
         * BUZZ 除数はデフォルト値となる.
         *
         * @param[in] message BUZZ 文言
         *
         * @see Buzz::default_divisor
         */
        Buzz(std::string message);
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
        : Zz { divisor, message }
    {}

    Buzz::Buzz(const std::string message)
        : Buzz { Buzz::default_divisor, message }
    {}
}

#endif /* FIZZ_BUZZXX__BUZZ_CLASS_HXX */
