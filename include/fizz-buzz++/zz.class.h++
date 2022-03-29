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
     * Zz 演算を行う関数オブジェクト
     */
    class Zz
    {
    public:
        /*!
         * 関数オブジェクトを生成する
         *
         * @param[in] divisor 除数
         * @param[in] message 文言
         */
        Zz(int divisor, std::string message);

        /*!
         * 関数呼び出し演算
         *
         * @param[in] n Zz の値を求める整数
         * @return Zz の値を返却する @n
         *         Zz の値が整数 @c n の場合は,
         *         整数 @c n を文字列に変換して返却する
         */
        auto operator()(int n) const -> std::string;

        /*!
         * 除数を取得する
         *
         * @return 除数
         */
        auto divisor() const -> int;

        /*!
         * 文言を取得する
         *
         * @return 文言
         */
        auto message() const -> std::string;

    private:
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

    auto Zz::operator()(const int n) const -> std::string
    {
        if (n % this->divisor() == 0) {
            return this->message();
        }
        return std::to_string(n);
    }

    auto Zz::divisor() const -> int
    {
        return this->_divisor;
    }

    auto Zz::message() const -> std::string
    {
        return this->_message;
    }
}

#endif /* FIZZ_BUZZXX__ZZ_CLASS_HXX */
