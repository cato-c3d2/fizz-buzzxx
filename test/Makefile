include ../configuration.mk

include_home  = ../include/
build_options = $(CXXFLAGS) -I $(include_home)

# ------------------------------------------------------------------------------
# Boost.Test を静的ライブラリとして使用する際のコンパイルオプション
# NOTE Boost.Test をヘッダオンリーライブラリとして使用する場合は,
#      この変数をコメントアウトすればよい
boost_test_options = -l boost_unit_test_framework \
                     -static \
                     -D LINK_BOOST_TEST_AS_STATIC_LIBRARY
# ------------------------------------------------------------------------------

.PHONY : all
all : clean build run

.PHONY : build
build : ./build/test-module.exe

build/test-module.exe : ./test-module.c++
	$(CXX) ./test-module.c++ -o ./build/test-module.exe \
        $(build_options) \
        $(boost_test_options)

.PHONY : clean
clean :
	$(RM) ./build/*.exe

.PHONY : run
run : ./build/test-module.exe
	./build/test-module.exe
