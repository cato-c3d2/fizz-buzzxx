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
     *
     * [ BUZZ 演算 ] @n
     * BUZZ 演算とは, 整数を被演算子とする単項演算であり,
     * 被演算子と解の関係は下記の通りである : @n
     * @li 被演算子が除数 5 で割り切れる場合, 解は文言 "Buzz" となる
     * @li それ以外の場合, 解は被演算子となる
     *
     * つまり, BUZZ 演算とは,
     * FIZZBUZZ 演算から 'BUZZ' に関する部分のみを抽出した演算である. @n
     *
     * @see FizzBuzz FIZZBUZZ 演算についてはこのクラスを参照のこと
     *
     * [ その他の用語 ] @n
     * このコードベースでは
     * BUZZ 演算にまつわる各要素を便宜上, 下記のように記述する : @n
     * @li 被演算子 ... @em <em>被演算数 n</em>
     * @li 除数 5 ... @em <em>BUZZ 除数</em>
     * @li 文言 "Buzz" ... @em <em>BUZZ 文言</em>
     *
     * [ クラス設計 ] @n
     * このクラスは BUZZ 演算を関数オブジェクトとして実装したものである. @n
     * @c Buzz::operator()() は,
     * 被演算数 n を引数に取り解となる文字列を返却する関数呼び出し演算子である. @n
     *
     * @see Buzz::operator()()
     *
     * なお, BUZZ 除数及び BUZZ 文言の値は,
     * コンストラクタの引数として指定することで,
     * 任意の値に変更することが可能である. @n
     *
     * @see Buzz::Buzz()
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
