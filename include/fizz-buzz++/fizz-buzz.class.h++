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
     * FizzBuzz 演算を行う関数オブジェクト
     */
    class FizzBuzz : public Fizz, public Buzz
    {
    public:
        /*!
         * 関数オブジェクトを生成する
         *
         * @param[in] fizz Fizz の関数オブジェクト
         * @param[in] buzz Buzz の関数オブジェクト
         */
        FizzBuzz(Fizz fizz = {}, Buzz buzz = {});

        /*!
         * 関数オブジェクトを生成する
         *
         * Fizz の関数オブジェクトはデフォルトとなる.
         *
         * @param[in] buzz Buzz の関数オブジェクト
         */
        FizzBuzz(Buzz buzz);

        /*!
         * 関数呼び出し演算
         *
         * @param[in] n FizzBuzz の値を求める整数
         * @return FizzBuzz の値を返却する @n
         *         FizzBuzz の値が整数 @c n の場合は,
         *         整数 @c n を文字列に変換して返却する
         */
        auto operator()(int n) const -> std::string;
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
}

#endif /* FIZZ_BUZZXX__FIZZ_BUZZ_CLASS_HXX */
