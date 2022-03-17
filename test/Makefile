CXX      = clang++
CXXFLAGS = -std=c++17 -Wall -g3 -I ../include/
SHELL    = /bin/bash

# ------------------------------------------------------------------------------
# Boost.Test を静的ライブラリとして使用する際のコンパイルオプション
# NOTE Boost.Test をヘッダオンリーライブラリとして使用する場合は,
#      この変数をコメントアウトすればよい
boost_test_options = -l boost_unit_test_framework \
                     -static \
                     -D LINK_BOOST_TEST_AS_STATIC_LIBRARY
# ------------------------------------------------------------------------------

.PHONY : test
test : test-clean test-build test-run

.PHONY : test-build
test-build : ./build/test-module.exe

build/test-module.exe : ./test-module.c++
	$(CXX) ./test-module.c++ -o ./build/test-module.exe \
        $(CXXFLAGS) \
        $(boost_test_options)

.PHONY : test-clean
test-clean :
	$(RM) ./build/*.exe

.PHONY : test-run
test-run : ./build/test-module.exe
	./build/test-module.exe
