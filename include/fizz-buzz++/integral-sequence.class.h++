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

    class IntegralSequence
    {
    public :
        IntegralSequence(int, int);

        auto begin() const -> IntegralSequenceIterator;

        auto end() const -> IntegralSequenceIterator;

    private :
        int _first_value;
        int _final_value;
    };

    class IntegralSequenceIterator
    {
    public :
        using difference_type   = std::ptrdiff_t;
        using value_type        = int;
        using pointer           = int *;
        using reference         = int &;
        using iterator_category = std::input_iterator_tag;

        IntegralSequenceIterator(int);

        auto operator * () -> reference;

        auto operator -> () -> pointer;

        auto operator ++ () -> IntegralSequenceIterator const &;

        auto operator ++ (int) -> IntegralSequenceIterator const;

        auto operator == (IntegralSequenceIterator const &) const -> bool;

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

    IntegralSequenceIterator::IntegralSequenceIterator(int const value)
        : _value(value)
    {}

    auto IntegralSequenceIterator::operator * () -> reference
    {
        return this->_value;
    }

    auto IntegralSequenceIterator::operator -> () -> pointer
    {
        return & this->_value;
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
