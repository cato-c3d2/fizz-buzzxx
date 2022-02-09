CXX      = clang++
CXXFLAGS = -std=c++17 -Wall -g3 -I ./include/
SHELL    = /bin/bash

.PHONY : all
all : clean build test-example

.PHONY : build
build : build/example-00.exe  \
        build/example-01a.exe \
        build/example-01b.exe \
        build/example-01c.exe \
        build/example-02a.exe \
        build/example-02b.exe \
        build/example-99.exe

build/example-00.exe : ./example/example-00.c++
	$(CXX) ./example/example-00.c++ -o ./build/example-00.exe $(CXXFLAGS)

build/example-01a.exe : ./example/example-01a.c++
	$(CXX) ./example/example-01a.c++ -o ./build/example-01a.exe $(CXXFLAGS)

build/example-01b.exe : ./example/example-01b.c++
	$(CXX) ./example/example-01b.c++ -o ./build/example-01b.exe $(CXXFLAGS)

build/example-01c.exe : ./example/example-01c.c++
	$(CXX) ./example/example-01c.c++ -o ./build/example-01c.exe $(CXXFLAGS)

build/example-02a.exe : ./example/example-02a.c++
	$(CXX) ./example/example-02a.c++ -o ./build/example-02a.exe $(CXXFLAGS)

build/example-02b.exe : ./example/example-02b.c++
	$(CXX) ./example/example-02b.c++ -o ./build/example-02b.exe $(CXXFLAGS)

build/example-99.exe : ./example/example-99.c++
	$(CXX) ./example/example-99.c++ -o ./build/example-99.exe $(CXXFLAGS)

.PHONY : clean
clean :
	$(RM) ./build/*.exe

.PHONY : test-example
test-example : test-example-00  \
               test-example-01a \
               test-example-01b \
               test-example-01c \
               test-example-02a \
               test-example-02b \
               test-example-99

# サンプルコードの期待結果(テキストファイル)と実行結果(標準出力)を比較し、
# 差異があれば標準エラー出力にリダイレクトする
.PHONY : test-example-00
test-example-00 : ./build/example-00.exe
	diff -u ./example/example-00.output.txt <(./build/example-00.exe) 1>&2

.PHONY : test-example-01a
test-example-01a : ./build/example-01a.exe
	diff -u ./example/example-01a.output.txt <(./build/example-01a.exe) 1>&2

.PHONY : test-example-01b
test-example-01b : ./build/example-01b.exe
	diff -u ./example/example-01b.output.txt <(./build/example-01b.exe) 1>&2

.PHONY : test-example-01c
test-example-01c : ./build/example-01c.exe
	diff -u ./example/example-01c.output.txt <(./build/example-01c.exe) 1>&2

.PHONY : test-example-02a
test-example-02a : ./build/example-02a.exe
	diff -u ./example/example-02a.output.txt <(./build/example-02a.exe) 1>&2

.PHONY : test-example-02b
test-example-02b : ./build/example-02b.exe
	diff -u ./example/example-02b.output.txt <(./build/example-02b.exe) 1>&2

.PHONY : test-example-99
test-example-99 : ./build/example-99.exe
	diff -u ./example/example-99.output.txt <(./build/example-99.exe) 1>&2
