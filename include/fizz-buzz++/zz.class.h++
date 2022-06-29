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
     * @brief Zz 演算を行う関数オブジェクト
     */
    class Zz
    {
    public:
        /*!
         * @brief 関数オブジェクトを生成する
         *
         * @param[in] divisor 除数
         * @param[in] message 文言
         */
        Zz(int divisor, std::string message);

        /*!
         * @brief 関数呼び出し演算
         *
         * @param[in] n Zz の値を求める整数
         *
         * @return Zz の値を返却する @n
         *         Zz の値が整数 @c n の場合は,
         *         整数 @c n を文字列に変換して返却する
         */
        auto operator()(int n) const -> std::string;

        /*!
         * @brief 等価比較演算
         *
         * @param[in] that この関数オブジェクトと比較する @c Zz
         *
         * @return この関数オブジェクトと @c that が等価である場合は @c true を,
         *         そうではない場合は @c false を返却する
         */
        auto operator==(const Zz & that) const -> bool;

        /*!
         * @brief 除数を取得する
         *
         * @return 除数
         */
        auto divisor() const -> int;

        /*!
         * @brief 文言を取得する
         *
         * @return 文言
         */
        auto message() const -> std::string;

    protected:
        /*!
         * @brief 整数 @c n が除数で割り切れるか判定する
         *
         * @param[in] n 割り切れるか判定する整数
         *
         * @retval true  整数 @c n が除数で割り切れる
         * @retval false 整数 @c n が除数で割り切れない
         */
        auto is_divisible_by(int n) const -> bool;

    private:
        int         _divisor;
        std::string _message;
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
        : _divisor { divisor }, _message { message }
    {
        if (divisor == 0) {
            throw std::invalid_argument("divisor is zero.");
        }
    }

    auto Zz::operator()(const int n) const -> std::string
    {
        if (this->is_divisible_by(n)) {
            return this->message();
        }
        return std::to_string(n);
    }

    auto Zz::operator==(const Zz & that) const -> bool
    {
        return this->_divisor == that._divisor
               && this->_message == that._message;
    }

    auto Zz::divisor() const -> int
    {
        return this->_divisor;
    }

    auto Zz::message() const -> std::string
    {
        return this->_message;
    }

    ////////////////////////////////////////////////////////////////////////////
    // Protected member
    ////////////////////////////////////////////////////////////////////////////

    auto Zz::is_divisible_by(const int n) const -> bool
    {
        return n % this->divisor() == 0;
    }
}

#endif /* FIZZ_BUZZXX__ZZ_CLASS_HXX */
