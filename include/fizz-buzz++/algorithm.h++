/*!
 * @file algorithm.h++
 */

#ifndef FIZZ_BUZZXX__ALGORITHM_HXX
#define FIZZ_BUZZXX__ALGORITHM_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Function declaration
//
////////////////////////////////////////////////////////////////////////////////

#include <fizz-buzz++/fizz-buzz.class.h++>

namespace fizz_buzzxx
{
    class FizzBuzz;

    /*!
     * イテレータの範囲に対して繰り返し FizzBuzz を評価する
     *
     * @param[in] first    範囲の開始位置を示す入力イテレータ
     * @param[in] last     範囲の終了位置を示す入力イテレータ
     * @param[in] callback 範囲内の各要素に適用されるユーザー定義の関数オブジェクト
     * @param[in] evaluate FizzBuzz を評価する関数オブジェクト
     *
     * @return 範囲内のすべての要素に適用した後の @c callback のコピーを返却する
     *
     * @see FizzBuzz
     */
    template<typename InputIterator, typename Callback>
    auto fizz_buzz(
        InputIterator first,
        InputIterator last,
        Callback      callback,
        FizzBuzz      evaluate = {}) -> Callback;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function definition
//
////////////////////////////////////////////////////////////////////////////////

#include <algorithm>

namespace fizz_buzzxx
{
    template<typename InputIterator, typename Callback>
    auto fizz_buzz(
        const InputIterator first,
        const InputIterator last,
        const Callback      callback,
        const FizzBuzz      evaluate) -> Callback
    {
        std::for_each(first, last, [&](auto value) {
            callback(evaluate(value));
        });
        return callback;
    }
}

#endif /* FIZZ_BUZZXX__ALGORITHM_HXX */
