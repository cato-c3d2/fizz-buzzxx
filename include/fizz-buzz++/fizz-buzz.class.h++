/*!
 * @file fizz-buzz.class.h++
 */

#ifndef FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX
#define FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Class definition / Class member declaration
//
////////////////////////////////////////////////////////////////////////////////

#include <fizz-buzz++/buzz.class.h++>
#include <fizz-buzz++/fizz.class.h++>

#include <string>

namespace fizz_buzzxx
{
    /*!
     * @brief FIZZBUZZ 演算を行う関数オブジェクト
     *
     * [ FIZZBUZZ 演算 ] @n
     * FIZZBUZZ 演算とは, 整数を被演算子とする単項演算であり,
     * 被演算子と解の関係は下記の通りである : @n
     * @li 被演算子が除数 3 で割り切れる場合, 解は文言 "Fizz" となる
     * @li 被演算子が除数 5 で割り切れる場合, 解は文言 "Buzz" となる
     * @li 被演算子が除数 3 と除数 5 の両方で割り切れる場合, 解は文言 "Fizz Buzz" となる
     * @li それ以外の場合, 解は被演算子となる
     *
     * [ その他の用語 ] @n
     * このコードベースでは
     * FIZZBUZZ 演算にまつわる各要素を便宜上, 下記のように記述する : @n
     * @li 被演算子 ... @em <em>被演算数 n</em>
     * @li 除数 3 ... @em <em>FIZZ 除数</em>
     * @li 除数 5 ... @em <em>BUZZ 除数</em>
     * @li 文言 "Fizz" ... @em <em>FIZZ 文言</em>
     * @li 文言 "Buzz" ... @em <em>BUZZ 文言</em>
     *
     * [ クラス設計 ] @n
     * このクラスは FIZZBUZZ 演算を関数オブジェクトとして実装したものである. @n
     * @c FizzBuzz::operator()() は,
     * 被演算数 n を引数に取り解となる文字列を返却する関数呼び出し演算子である. @n
     *
     * @see FizzBuzz::operator()()
     *
     * なお, FIZZ 除数, FIZZ 文言, BUZZ 除数, BUZZ 文言の値は,
     * コンストラクタの引数として指定することで,
     * 任意の値に変更することが可能である. @n
     *
     * @see FizzBuzz::FizzBuzz()
     */
    class FizzBuzz : public Fizz, public Buzz
    {
    public:
        /*!
         * @brief 関数オブジェクトを生成する
         *
         * @param[in] fizz Fizz の関数オブジェクト
         * @param[in] buzz Buzz の関数オブジェクト
         */
        FizzBuzz(Fizz fizz = {}, Buzz buzz = {});

        /*!
         * @brief 関数オブジェクトを生成する
         *
         * Fizz の関数オブジェクトはデフォルトとなる.
         *
         * @param[in] buzz Buzz の関数オブジェクト
         */
        FizzBuzz(Buzz buzz);

        /*!
         * @brief 関数呼び出し演算
         *
         * 被演算数 @c n に対して FIZZBUZZ 演算を行う. @n
         * 被演算数 @c n と戻り値の関係は下記の通り : @n
         * @li 被演算数 @c n が FIZZ 除数で割り切れる場合, FIZZ 文言を返却する
         * @li 被演算数 @c n が BUZZ 除数で割り切れる場合, BUZZ 文言を返却する
         * @li 被演算数 @c n が FIZZ 除数と BUZZ 除数の両方で割り切れる場合,
         *     FIZZ 文言と BUZZ 文言を結合した文字列を返却する
         * @li それ以外の場合, 被演算数 @c n を文字列に変換して返却する
         *
         * @param[in] n 被演算数
         *
         * @return FIZZBUZZ 演算の解
         */
        auto operator()(int n) const -> std::string;

        /*!
         * @brief 等価比較演算
         *
         * @param[in] that この関数オブジェクトと比較する @c FizzBuzz
         *
         * @return この関数オブジェクトと @c that が等価である場合は @c true を,
         *         そうではない場合は @c false を返却する
         */
        auto operator==(const FizzBuzz & that) const -> bool;
    };
}

////////////////////////////////////////////////////////////////////////////////
//
// Class member definition
//
////////////////////////////////////////////////////////////////////////////////

#include <boost/algorithm/string/join.hpp>

#include <stdexcept>

namespace fizz_buzzxx
{
    FizzBuzz::FizzBuzz(const Fizz fizz, const Buzz buzz)
        : Fizz { fizz }, Buzz { buzz }
    {}

    FizzBuzz::FizzBuzz(const Buzz buzz) : FizzBuzz { Fizz(), buzz }
    {}

    auto FizzBuzz::operator()(const int n) const -> std::string
    {
        std::vector<std::string> messages = {};
        if (this->Fizz::is_divisible_by(n)) {
            messages.push_back(this->Fizz::message());
        }
        if (this->Buzz::is_divisible_by(n)) {
            messages.push_back(this->Buzz::message());
        }
        if (! messages.empty()) {
            return boost::algorithm::join(messages, " ");
        }
        return std::to_string(n);
    }

    auto FizzBuzz::operator==(const FizzBuzz & that) const -> bool
    {
        return this->Fizz::   operator==(static_cast<Fizz>(that))
               && this->Buzz::operator==(static_cast<Buzz>(that));
    }
}

#endif /* FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX */
