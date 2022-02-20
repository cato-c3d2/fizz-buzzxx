/*!
 * @file integral-sequence.class.h++
 */

#ifndef FIZZ_BUZZXX__INTEGRAL_SEQUENCE_CLASS_HXX
#define FIZZ_BUZZXX__INTEGRAL_SEQUENCE_CLASS_HXX

////////////////////////////////////////////////////////////////////////////////
//
// Class definition / Class member declaration
//
////////////////////////////////////////////////////////////////////////////////

namespace fizz_buzzxx
{
    class IntegralSequenceIterator;

    /*!
     * 整数の並びを表現するシーケンスコンテナ
     */
    class IntegralSequence
    {
    public :

        /*!
         * シーケンスコンテナを生成する
         *
         * @param[in] first_value 先頭の整数
         * @param[in] final_value 末尾の整数 @n
         *                        この値はシーケンスコンテナの範囲に含まれる
         */
        IntegralSequence(int, int);

        /*!
         * このシーケンスコンテナの開始位置を示す入力イテレータを生成する
         *
         * @return このシーケンスコンテナの開始位置を示す入力イテレータを返却する
         */
        auto begin() const -> IntegralSequenceIterator;

        /*!
         * このシーケンスコンテナの終了位置を示す入力イテレータを生成する
         *
         * @return このシーケンスコンテナの終了位置を示す入力イテレータを返却する
         */
        auto end() const -> IntegralSequenceIterator;

    private :
        int _first_value;
        int _final_value;
    };

    /*!
     * @c IntegralSequence の入力イテレータ
     *
     * @see IntegralSequence
     */
    class IntegralSequenceIterator
    {
    public :

        /*! イテレータ間の差を表す符号付き整数型 */
        using difference_type   = std::ptrdiff_t;

        /*! イテレータが指す値の型 */
        using value_type        = int;

        /*! イテレータが指す値のポインタ型 */
        using pointer           = int *;

        /*! イテレータが指す値の参照型 */
        using reference         = int &;

        /*! イテレータの分類 */
        using iterator_category = std::input_iterator_tag;

        /*!
         * イテレータを生成する
         *
         * @param[in] value イテレータが指す値
         */
        IntegralSequenceIterator(value_type);

        /*!
         * 間接参照演算
         *
         * @return このイテレータが指す値への参照を返却する
         */
        auto operator * () -> reference;

        /*!
         * メンバアクセス演算
         *
         * @return このイテレータが指す値への参照を返却する
         */
        auto operator -> () -> reference;

        /*!
         * 前置インクリメント演算
         *
         * @return このイテレータを進めた後, このイテレータへの参照を返却する
         */
        auto operator ++ () -> IntegralSequenceIterator const &;

        /*!
         * 後置インクリメント演算
         *
         * @return このイテレータを進めた後,
         *         このイテレータの進める前のコピーを返却する
         */
        auto operator ++ (int) -> IntegralSequenceIterator const;

        /*!
         * 等価比較演算
         *
         * @param[in] that このイテレータと比較する @c IntegralSequenceIterator
         *
         * @return このイテレータと @c that が等価である場合は @c true を,
         *         そうではない場合は @c false を返却する
         */
        auto operator == (IntegralSequenceIterator const &) const -> bool;

        /*!
         * 非等価比較演算
         *
         * @param[in] that このイテレータと比較する @c IntegralSequenceIterator
         *
         * @return このイテレータと @c that が非等価である場合は @c true を,
         *         そうではない場合は @c false を返却する
         */
        auto operator != (IntegralSequenceIterator const &) const -> bool;

    private :
        int _value;
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
    // IntegralSequence
    ////////////////////////////////////////////////////////////////////////////

    IntegralSequence::IntegralSequence(
        int const first_value, int const final_value)
        : _first_value(first_value), _final_value(final_value)
    {}

    auto IntegralSequence::begin() const -> IntegralSequenceIterator
    {
        return IntegralSequenceIterator(this->_first_value);
    }

    auto IntegralSequence::end() const -> IntegralSequenceIterator
    {
        return IntegralSequenceIterator(this->_final_value + 1);
    }

    ////////////////////////////////////////////////////////////////////////////
    // IntegralSequenceIterator
    ////////////////////////////////////////////////////////////////////////////

    IntegralSequenceIterator::IntegralSequenceIterator(value_type const value)
        : _value(value)
    {}

    auto IntegralSequenceIterator::operator * () -> reference
    {
        return this->_value;
    }

    auto IntegralSequenceIterator::operator -> () -> reference
    {
        return this->_value;
    }

    auto IntegralSequenceIterator::operator ++ ()
    -> IntegralSequenceIterator const &
    {
        ++ this->_value;
        return * this;
    }

    auto IntegralSequenceIterator::operator ++ (int)
    -> IntegralSequenceIterator const
    {
        IntegralSequenceIterator const clone = * this;
        this->_value ++;
        return clone;
    }

    auto IntegralSequenceIterator::operator == (
        IntegralSequenceIterator const & that) const -> bool
    {
        return this->_value == that._value;
    }

    auto IntegralSequenceIterator::operator != (
        IntegralSequenceIterator const & that) const -> bool
    {
        return this->_value != that._value;
    }
}

#endif /* FIZZ_BUZZXX__INTEGRAL_SEQUENCE_CLASS_HXX */
