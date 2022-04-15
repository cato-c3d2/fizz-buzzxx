/*!
 * @file fizz-buzz-sequence.class.h++
 */

#ifndef FIZZ_BUZZXX__FIZZ_BUZZ_SEQUENCE_CLASS_HXX
#define FIZZ_BUZZXX__FIZZ_BUZZ_SEQUENCE_CLASS_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Class definition / Class member declaration
//
////////////////////////////////////////////////////////////////////////////////

#include <fizz-buzz++/fizz-buzz.class.h++>

#include <cstddef>
#include <iterator>

namespace fizz_buzzxx
{
    class FizzBuzzSequenceElement;

    /*!
     * FizzBuzz 演算の対象となる整数の範囲を表現するシーケンスコンテナ
     */
    class FizzBuzzSequence
    {
    public:
        /*! @c FizzBuzzSequence の入力イテレータ */
        class Iterator;

        /*!
         * シーケンスコンテナを生成する
         *
         * @param[in] first     先頭の整数
         * @param[in] final     末尾の整数 @n
         *                      この値はシーケンスコンテナの範囲に含まれる
         * @param[in] fizz_buzz FizzBuzz 演算を行う関数オブジェクト
         */
        FizzBuzzSequence(int first, int final, FizzBuzz fizz_buzz = {});

        /*!
         * このシーケンスコンテナの開始位置を示す入力イテレータを生成する
         *
         * @return このシーケンスコンテナの開始位置を示す入力イテレータを返却する
         */
        auto begin() const -> Iterator;

        /*!
         * このシーケンスコンテナの終了位置を示す入力イテレータを生成する
         *
         * @return このシーケンスコンテナの終了位置を示す入力イテレータを返却する
         */
        auto end() const -> Iterator;

    private:
        int      _first;
        int      _final;
        FizzBuzz _fizz_buzz;
    };

    /*!
     * @c FizzBuzzSequence の要素を表現するオブジェクト
     *
     * 実際には, @c FizzBuzzSequence がこのオブジェクトを直接保持するわけではないが,
     * @c FizzBuzzSequence::Iterator を経由して間接的に参照される. @n
     *
     * @see FizzBuzz
     * @see FizzBuzzSequence
     * @see FizzBuzzSequence::Iterator
     */
    class FizzBuzzSequenceElement
    {
    public:
        /*!
         * オブジェクトを生成する
         *
         * @param[in] fizz_buzz FizzBuzz 演算を行う関数オブジェクト
         * @param[in] n         被除数
         */
        explicit FizzBuzzSequenceElement(FizzBuzz fizz_buzz, int n);

        /*!
         * 関数呼び出し演算
         *
         * @return このオブジェクトが保持する被除数 @c n に対して FizzBuzz 演算を行い,
         *         結果を返却する
         */
        auto operator()() const -> std::string;

        /*!
         * 等価比較演算
         *
         * @param[in] that このオブジェクトと比較する @c FizzBuzzSequenceElement
         *
         * @return このオブジェクトと @c that が等価である場合は @c true を,
         *         そうではない場合は @c false を返却する
         */
        auto operator==(const FizzBuzzSequenceElement & that) const -> bool;

        /*!
         * 非等価比較演算
         *
         * @param[in] that このオブジェクトと比較する @c FizzBuzzSequenceElement
         *
         * @return このオブジェクトと @c that が非等価である場合は @c true を,
         *         そうではない場合は @c false を返却する
         */
        auto operator!=(const FizzBuzzSequenceElement & that) const -> bool;

        /*!
         * 前置インクリメント演算
         *
         * @return このオブジェクトが保持する被除数 @c n をインクリメントした後,
         *         このオブジェクトへの参照を返却する
         */
        auto operator++() -> FizzBuzzSequenceElement &;

        /*!
         * 後置インクリメント演算
         *
         * @return このオブジェクトが保持する被除数 @c n をインクリメントした後,
         *         このオブジェクトのインクリメントする前のコピーを返却する
         */
        auto operator++(int) -> const FizzBuzzSequenceElement;

    private:
        FizzBuzz _fizz_buzz;
        int      _n;
    };

    /*!
     * @c FizzBuzzSequence の入力イテレータ
     *
     * @see FizzBuzzSequence
     */
    class FizzBuzzSequence::Iterator
    {
    public:
        /*! イテレータ間の差を表す符号付き整数型 */
        using difference_type = std::ptrdiff_t;

        /*! イテレータが指す値の型 */
        using value_type = FizzBuzzSequenceElement;

        /*! イテレータが指す値のポインタ型 */
        using pointer = FizzBuzzSequenceElement *;

        /*! イテレータが指す値の参照型 (非 const) */
        using reference = FizzBuzzSequenceElement &;

        /*!
         * イテレータが指す値の参照型 (const)
         *
         * @see reference
         */
        using const_reference = const FizzBuzzSequenceElement &;

        /*! イテレータの分類 */
        using iterator_category = std::input_iterator_tag;

        /*!
         * イテレータを生成する
         *
         * @param[in] element このイテレータが指す
         *                    @c FizzBuzzSequenceElement オブジェクト
         */
        Iterator(FizzBuzzSequenceElement element);

        /*!
         * 間接参照演算
         *
         * @return このイテレータが指す値への参照を返却する
         */
        auto operator*() -> reference;

        /*!
         * @copydoc operator*()
         */
        auto operator*() const -> const_reference;

        /*!
         * メンバアクセス演算
         *
         * @return このイテレータが指す値への参照を返却する
         */
        auto operator->() -> reference;

        /*!
         * @copydoc operator->()
         */
        auto operator->() const -> const_reference;

        /*!
         * 等価比較演算
         *
         * @param[in] that このイテレータと比較する @c Iterator
         *
         * @return このイテレータと @c that が等価である場合は @c true を,
         *         そうではない場合は @c false を返却する
         */
        auto operator==(const Iterator & that) const -> bool;

        /*!
         * 非等価比較演算
         *
         * @param[in] that このイテレータと比較する @c Iterator
         *
         * @return このイテレータと @c that が非等価である場合は @c true を,
         *         そうではない場合は @c false を返却する
         */
        auto operator!=(const Iterator & that) const -> bool;

        /*!
         * 前置インクリメント演算
         *
         * @return このイテレータを進めた後, このイテレータへの参照を返却する
         */
        auto operator++() -> const Iterator &;

        /*!
         * 後置インクリメント演算
         *
         * @return このイテレータを進めた後,
         *         このイテレータの進める前のコピーを返却する
         */
        auto operator++(int) -> const Iterator;

    private:
        FizzBuzzSequenceElement _element;
    };
}

////////////////////////////////////////////////////////////////////////////////
//
// Class member definition
//
////////////////////////////////////////////////////////////////////////////////

namespace fizz_buzzxx
{
    ////////////////////////////////////////////////////////////////////////////
    // FizzBuzzSequence
    ////////////////////////////////////////////////////////////////////////////

    FizzBuzzSequence::FizzBuzzSequence(
        const int first, const int final, const FizzBuzz fizz_buzz)
        : _first { first }, _final { final }, _fizz_buzz { fizz_buzz }
    {}

    auto FizzBuzzSequence::begin() const -> Iterator
    {
        return Iterator { FizzBuzzSequenceElement { this->_fizz_buzz,
                                                    this->_first } };
    }

    auto FizzBuzzSequence::end() const -> Iterator
    {
        return Iterator { FizzBuzzSequenceElement { this->_fizz_buzz,
                                                    this->_final + 1 } };
    }

    ////////////////////////////////////////////////////////////////////////////
    // FizzBuzzSequenceElement
    ////////////////////////////////////////////////////////////////////////////

    FizzBuzzSequenceElement::FizzBuzzSequenceElement(
        const FizzBuzz fizz_buzz, const int n)
        : _fizz_buzz { fizz_buzz }, _n { n }
    {}

    auto FizzBuzzSequenceElement::operator()() const -> std::string
    {
        return this->_fizz_buzz(this->_n);
    }

    auto FizzBuzzSequenceElement::operator==(
        const FizzBuzzSequenceElement & that) const -> bool
    {
        return this->_fizz_buzz == that._fizz_buzz && this->_n == that._n;
    }

    auto FizzBuzzSequenceElement::operator!=(
        const FizzBuzzSequenceElement & that) const -> bool
    {
        return ! this->operator==(that);
    }

    auto FizzBuzzSequenceElement::operator++() -> FizzBuzzSequenceElement &
    {
        ++this->_n;
        return *this;
    }

    auto FizzBuzzSequenceElement::operator++(int)
        -> const FizzBuzzSequenceElement
    {
        FizzBuzzSequenceElement clone = *this;
        this->_n++;
        return clone;
    }

    ////////////////////////////////////////////////////////////////////////////
    // Iterator
    ////////////////////////////////////////////////////////////////////////////

    FizzBuzzSequence::Iterator::Iterator(const FizzBuzzSequenceElement element)
        : _element { element }
    {}

    auto FizzBuzzSequence::Iterator::operator*() -> reference
    {
        return this->_element;
    }

    auto FizzBuzzSequence::Iterator::operator*() const -> const_reference
    {
        return this->_element;
    }

    auto FizzBuzzSequence::Iterator::operator->() -> reference
    {
        return this->_element;
    }

    auto FizzBuzzSequence::Iterator::operator->() const -> const_reference
    {
        return this->_element;
    }

    auto FizzBuzzSequence::Iterator::operator++() -> const Iterator &
    {
        ++this->_element;
        return *this;
    }

    auto FizzBuzzSequence::Iterator::operator++(int) -> const Iterator
    {
        Iterator clone = { *this };
        ++this->_element;
        return clone;
    }

    auto FizzBuzzSequence::Iterator::operator==(const Iterator & that) const
        -> bool
    {
        return this->_element == that._element;
    }

    auto FizzBuzzSequence::Iterator::operator!=(const Iterator & that) const
        -> bool
    {
        return ! this->operator==(that);
    }
}

#endif /* FIZZ_BUZZXX__FIZZ_BUZZ_SEQUENCE_CLASS_HXX */
