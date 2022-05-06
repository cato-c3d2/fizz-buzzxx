#define BOOST_TEST_MODULE fizz_buzzxx

#ifdef LINK_BOOST_TEST_AS_STATIC_LIBRARY
    // Boost.Test を静的ライブラリとして使用する
    #include <boost/test/unit_test.hpp>
#else
    // Boost.Test をヘッダオンリーライブラリとして使用する
    #include <boost/test/included/unit_test.hpp>
#endif

#include "./include/fizz-buzz++/algorithm.test-case.h++"
#include "./include/fizz-buzz++/buzz.class.test-case.h++"
#include "./include/fizz-buzz++/fizz-buzz-sequence.class.test-case.h++"
#include "./include/fizz-buzz++/fizz-buzz.class.test-case.h++"
#include "./include/fizz-buzz++/fizz.class.test-case.h++"
#include "./include/fizz-buzz++/zz.class.test-case.h++"
