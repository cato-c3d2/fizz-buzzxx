/*!
 * @file zz.class.h++
 */

#ifndef FIZZ_BUZZXX__ZZ_CLASS_HXX
#define FIZZ_BUZZXX__ZZ_CLASS_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Class definition / Class member declaration
//
////////////////////////////////////////////////////////////////////////////////

#include <string>

namespace fizz_buzzxx
{
    /*!
     * クラス Fizz 及び Buzz の基底クラス
     */
    class Zz
    {
    public:
        /*!
         * オブジェクトを生成する
         *
         * @param[in] divisor 除数
         * @param[in] message 文言
         */
        Zz(int divisor, std::string message);

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
    Zz::Zz(const int divisor, const std::string message)
        : _divisor(divisor), _message(message)
    {
        if (divisor == 0) {
            throw std::invalid_argument("divisor is zero.");
        }
    }
}

#endif /* FIZZ_BUZZXX__ZZ_CLASS_HXX */
