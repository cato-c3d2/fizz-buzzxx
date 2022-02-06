#ifndef FIZZ_BUZZXX__ALGORITHM_HXX
#define FIZZ_BUZZXX__ALGORITHM_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Function declaration
//
////////////////////////////////////////////////////////////////////////////////

namespace fizz_buzzxx
{
    class FizzBuzz;

    template<
        typename InputIterator,
        typename Callback,
        typename FizzBuzzEvaluator = FizzBuzz
    >
    auto fizz_buzz(
        InputIterator, InputIterator, Callback, FizzBuzzEvaluator = {}
    ) -> Callback;
}

////////////////////////////////////////////////////////////////////////////////
//
// Function definition
//
////////////////////////////////////////////////////////////////////////////////

#include <algorithm>

namespace fizz_buzzxx
{
    template<
        typename InputIterator, typename Callback, typename FizzBuzzEvaluator>
    auto fizz_buzz(
        InputIterator     const first,
        InputIterator     const last,
        Callback          const callback,
        FizzBuzzEvaluator const fizz_buzz_evaluator
    ) -> Callback
    {
        std::for_each(first, last, [&](auto value) {
            callback(fizz_buzz_evaluator(value));
        });
        return callback;
    }
}

#endif /* FIZZ_BUZZXX__ALGORITHM_HXX */
