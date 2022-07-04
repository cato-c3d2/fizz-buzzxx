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

#include <fizz-buzz++/zz.class.h++>

#include <string>

namespace fizz_buzzxx
{
    /*!
     * @brief FIZZ 演算を行う関数オブジェクト
     */
    class Fizz : public Zz
    {
    public:
        /*! @brief FIZZ 除数のデフォルト値 */
        static const int default_divisor;

        /*! @brief FIZZ 文言のデフォルト値 */
        static const std::string default_message;

        /*!
         * @brief 関数オブジェクトを生成する
         *
         * @param[in] divisor FIZZ 除数
         * @param[in] message FIZZ 文言
         */
        Fizz(
            int         divisor = Fizz::default_divisor,
            std::string message = Fizz::default_message);

        /*!
         * @brief 関数オブジェクトを生成する
         *
         * FIZZ 除数はデフォルト値となる.
         *
         * @param[in] message FIZZ 文言
         *
         * @see Fizz::default_divisor
         */
        Fizz(std::string message);
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
        : Zz { divisor, message }
    {}

    Fizz::Fizz(const std::string message)
        : Fizz { Fizz::default_divisor, message }
    {}
}

#endif /* FIZZ_BUZZXX__FIZZ_CLASS_HXX */
