CXX      = clang++
CXXFLAGS = -std=c++17 -Wall -g3 -I ./include/
SHELL    = /bin/bash

.PHONY : all
all : clean build test-example

.PHONY : build
build : build/example-00.exe \
        build/example-99.exe

build/example-00.exe : ./example/example-00.c++
	$(CXX) ./example/example-00.c++ -o ./build/example-00.exe $(CXXFLAGS)

build/example-99.exe : ./example/example-99.c++
	$(CXX) ./example/example-99.c++ -o ./build/example-99.exe $(CXXFLAGS)

.PHONY : clean
clean :
	$(RM) ./build/*.exe

.PHONY : test-example
test-example : test-example-00 \
               test-example-99

# サンプルコードの期待結果(テキストファイル)と実行結果(標準出力)を比較し、
# 差異があれば標準エラー出力にリダイレクトする
.PHONY : test-example-00
test-example-00 : ./build/example-00.exe
	diff -u ./example/example-00.output.txt <(./build/example-00.exe) 1>&2

.PHONY : test-example-99
test-example-99 : ./build/example-99.exe
	diff -u ./example/example-99.output.txt <(./build/example-99.exe) 1>&2
