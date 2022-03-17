include ./configuration.mk

include_home  = ./include/
build_options = $(CXXFLAGS) -I $(include_home)

.PHONY : all
all : clean format build test test-example document

.PHONY : build
build : build/example-00a.exe \
        build/example-01a.exe \
        build/example-01b.exe \
        build/example-01c.exe \
        build/example-02a.exe \
        build/example-02b.exe \
        build/example-03a.exe \
        build/example-03b.exe \
        build/example-03c.exe \
        build/example-10a.exe \
        build/example-99z.exe

build/example-00a.exe : ./example/example-00a.c++
	$(CXX) ./example/example-00a.c++ -o ./build/example-00a.exe $(build_options)

build/example-01a.exe : ./example/example-01a.c++
	$(CXX) ./example/example-01a.c++ -o ./build/example-01a.exe $(build_options)

build/example-01b.exe : ./example/example-01b.c++
	$(CXX) ./example/example-01b.c++ -o ./build/example-01b.exe $(build_options)

build/example-01c.exe : ./example/example-01c.c++
	$(CXX) ./example/example-01c.c++ -o ./build/example-01c.exe $(build_options)

build/example-02a.exe : ./example/example-02a.c++
	$(CXX) ./example/example-02a.c++ -o ./build/example-02a.exe $(build_options)

build/example-02b.exe : ./example/example-02b.c++
	$(CXX) ./example/example-02b.c++ -o ./build/example-02b.exe $(build_options)

build/example-03a.exe : ./example/example-03a.c++
	$(CXX) ./example/example-03a.c++ -o ./build/example-03a.exe $(build_options)

build/example-03b.exe : ./example/example-03b.c++
	$(CXX) ./example/example-03b.c++ -o ./build/example-03b.exe $(build_options)

build/example-03c.exe : ./example/example-03c.c++
	$(CXX) ./example/example-03c.c++ -o ./build/example-03c.exe $(build_options)

build/example-10a.exe : ./example/example-10a.c++
	$(CXX) ./example/example-10a.c++ -o ./build/example-10a.exe $(build_options)

build/example-99z.exe : ./example/example-99z.c++
	$(CXX) ./example/example-99z.c++ -o ./build/example-99z.exe $(build_options)

.PHONY : clean
clean :
	$(RM) ./build/*.exe

.PHONY : test-example
test-example : test-example-00a \
               test-example-01a \
               test-example-01b \
               test-example-01c \
               test-example-02a \
               test-example-02b \
               test-example-03a \
               test-example-03b \
               test-example-03c \
               test-example-10a \
               test-example-99z

# サンプルコードの期待結果(テキストファイル)と実行結果(標準出力)を比較し、
# 差異があれば標準エラー出力にリダイレクトする
.PHONY : test-example-00a
test-example-00a : ./build/example-00a.exe
	diff -u ./example/output/example-00a.txt <(./build/example-00a.exe) 1>&2

.PHONY : test-example-01a
test-example-01a : ./build/example-01a.exe
	diff -u ./example/output/example-01a.txt <(./build/example-01a.exe) 1>&2

.PHONY : test-example-01b
test-example-01b : ./build/example-01b.exe
	diff -u ./example/output/example-01b.txt <(./build/example-01b.exe) 1>&2

.PHONY : test-example-01c
test-example-01c : ./build/example-01c.exe
	diff -u ./example/output/example-01c.txt <(./build/example-01c.exe) 1>&2

.PHONY : test-example-02a
test-example-02a : ./build/example-02a.exe
	diff -u ./example/output/example-02a.txt <(./build/example-02a.exe) 1>&2

.PHONY : test-example-02b
test-example-02b : ./build/example-02b.exe
	diff -u ./example/output/example-02b.txt <(./build/example-02b.exe) 1>&2

.PHONY : test-example-03a
test-example-03a : ./build/example-03a.exe
	diff -u ./example/output/example-03a.txt <(./build/example-03a.exe) 1>&2

.PHONY : test-example-03b
test-example-03b : ./build/example-03b.exe
	diff -u ./example/output/example-03b.txt <(./build/example-03b.exe) 1>&2

.PHONY : test-example-03c
test-example-03c : ./build/example-03c.exe
	diff -u ./example/output/example-03c.txt <(./build/example-03c.exe) 1>&2

.PHONY : test-example-10a
test-example-10a : ./build/example-10a.exe
	diff -u ./example/output/example-10a.txt <(./build/example-10a.exe) 1>&2

.PHONY : test-example-99z
test-example-99z : ./build/example-99z.exe
	diff -u ./example/output/example-99z.txt <(./build/example-99z.exe) 1>&2

################################################################################
# document (Doxygen)
################################################################################

.PHONY : document
document : document-clean document-build

.PHONY : document-build
document-build :
	doxygen > /dev/null
    # NOTE doxygen コマンドの標準出力は量が多いため破棄する.
    #      無論, 標準エラー出力は破棄しない.
    #      ドキュメントコメントが不足している場合は,
    #      doxygen コマンドの warning として標準エラー出力に出力される.

.PHONY : document-clean
document-clean :
	$(RM) -r ./document/html/*

################################################################################
# format (clang-format)
################################################################################

.PHONY : format
format :
	find -type f -name "*.c++" -o -name "*.h++" | xargs clang-format -i

################################################################################
# test (Boost.Test)
################################################################################

.PHONY : test
test :
	cd ./test/ && $(MAKE)
