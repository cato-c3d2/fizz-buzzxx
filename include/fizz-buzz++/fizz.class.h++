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
     *
     * [ FIZZ 演算 ] @n
     * FIZZ 演算とは, 整数を被演算子とする単項演算であり,
     * 被演算子と解の関係は下記の通りである : @n
     * @li 被演算子が除数 3 で割り切れる場合, 解は文言 "Fizz" となる
     * @li それ以外の場合, 解は被演算子となる
     *
     * つまり, FIZZ 演算とは,
     * FIZZBUZZ 演算から 'FIZZ' に関する部分のみを抽出した演算である. @n
     *
     * @see FizzBuzz FIZZBUZZ 演算についてはこのクラスを参照のこと
     *
     * [ その他の用語 ] @n
     * このコードベースでは
     * FIZZ 演算にまつわる各要素を便宜上, 下記のように記述する : @n
     * @li 被演算子 ... @em <em>被演算数 n</em>
     * @li 除数 3 ... @em <em>FIZZ 除数</em>
     * @li 文言 "Fizz" ... @em <em>FIZZ 文言</em>
     *
     * [ クラス設計 ] @n
     * このクラスは FIZZ 演算を関数オブジェクトとして実装したものである. @n
     * @c Fizz::operator()() は,
     * 被演算数 n を引数に取り解となる文字列を返却する関数呼び出し演算子である. @n
     *
     * @see Fizz::operator()()
     *
     * なお, FIZZ 除数及び FIZZ 文言の値は,
     * コンストラクタの引数として指定することで,
     * 任意の値に変更することが可能である. @n
     *
     * @see Fizz::Fizz()
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
