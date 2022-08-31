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
     * @brief ZZ 演算を行う関数オブジェクト
     *
     * [ ZZ 演算 ] @n
     * ZZ 演算とは, 整数を被演算子とする演算であり,
     * 被演算子と解の関係は下記の通りである : @n
     * @li 被演算数 n が任意の除数で割り切れる場合, 解は任意の文言となる
     * @li それ以外の場合, 解は被演算子となる
     *
     * つまり, ZZ 演算とは,
     * FIZZ 演算及び BUZZ 演算を汎化した演算である. @n
     *
     * @see Fizz FIZZ 演算についてはこのクラスを参照のこと
     * @see Buzz BUZZ 演算についてはこのクラスを参照のこと
     *
     * [ その他の用語 ] @n
     * このコードベースでは
     * ZZ 演算にまつわる各要素を便宜上, 下記のように記述する : @n
     * @li 被演算子 ... @em <em>被演算数 n</em>
     * @li 任意の除数 ... @em <em>ZZ 除数</em>
     * @li 任意の文言 ... @em <em>ZZ 文言</em>
     *
     * [ クラス設計 ] @n
     * このクラスは ZZ 演算を関数オブジェクトとして実装したものである. @n
     * @c Zz::operator()() は,
     * 被演算数 n を引数に取り解となる文字列を返却する関数呼び出し演算子である. @n
     *
     * @see Zz::operator()()
     *
     * なお, ZZ 除数及び ZZ 文言の値は, コンストラクタの引数として指定することで,
     * 任意の値に変更することが可能である. @n
     *
     * @see Zz::Zz()
     */
    class Zz
    {
    public:
        /*!
         * @brief 関数オブジェクトを生成する
         *
         * @param[in] divisor ZZ 除数
         * @param[in] message ZZ 文言
         */
        Zz(int divisor, std::string message);

        /*!
         * @brief 関数呼び出し演算
         *
         * 被演算数 @c n に対して ZZ 演算を行う. @n
         * 被演算数 @c n が ZZ 除数で割り切れる場合,
         *  ZZ 文言を返却し,
         * それ以外の場合, 被演算数 @c n を文字列に変換して返却する. @n
         *
         * @param[in] n 被演算数
         *
         * @return ZZ 演算の解
         *
         * @see Zz::divisor ZZ 除数
         * @see Zz::message ZZ 文言
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
         * @brief ZZ 除数を取得する
         *
         * @return ZZ 除数
         */
        auto divisor() const -> int;

        /*!
         * @brief ZZ 文言を取得する
         *
         * @return ZZ 文言
         */
        auto message() const -> std::string;

    protected:
        /*!
         * @brief 整数 @c n が ZZ 除数で割り切れるか判定する
         *
         * @param[in] n 割り切れるか判定する整数
         *
         * @retval true  整数 @c n が ZZ 除数で割り切れる
         * @retval false 整数 @c n が ZZ 除数で割り切れない
         *
         * @see Zz::divisor ZZ 除数
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
