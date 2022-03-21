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
	$(CXX) $< -o $@ $(build_options)
    # NOTE 自動変数が展開され, 下記のコマンドが評価される :
    #      $(CXX) ./example/example-00a.c++ -o build/example-00a.exe $(build_options)
    #
    #      自動変数の意味 :
    #      $@ ... ターゲットファイル名
    #      $< ... 最初の依存ファイル名

build/example-01a.exe : ./example/example-01a.c++
	$(CXX) $< -o $@ $(build_options)

build/example-01b.exe : ./example/example-01b.c++
	$(CXX) $< -o $@ $(build_options)

build/example-01c.exe : ./example/example-01c.c++
	$(CXX) $< -o $@ $(build_options)

build/example-02a.exe : ./example/example-02a.c++
	$(CXX) $< -o $@ $(build_options)

build/example-02b.exe : ./example/example-02b.c++
	$(CXX) $< -o $@ $(build_options)

build/example-03a.exe : ./example/example-03a.c++
	$(CXX) $< -o $@ $(build_options)

build/example-03b.exe : ./example/example-03b.c++
	$(CXX) $< -o $@ $(build_options)

build/example-03c.exe : ./example/example-03c.c++
	$(CXX) $< -o $@ $(build_options)

build/example-10a.exe : ./example/example-10a.c++
	$(CXX) $< -o $@ $(build_options)

build/example-99z.exe : ./example/example-99z.c++
	$(CXX) $< -o $@ $(build_options)

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
	diff -u ./example/output/example-00a.txt <($<) 1>&2
    # NOTE 自動変数が展開され, 下記のコマンドが実行される :
    #      diff -u ./example/output/example-00a.txt <(./build/example-00a.exe) 1>&2

.PHONY : test-example-01a
test-example-01a : ./build/example-01a.exe
	diff -u ./example/output/example-01a.txt <($<) 1>&2

.PHONY : test-example-01b
test-example-01b : ./build/example-01b.exe
	diff -u ./example/output/example-01b.txt <($<) 1>&2

.PHONY : test-example-01c
test-example-01c : ./build/example-01c.exe
	diff -u ./example/output/example-01c.txt <($<) 1>&2

.PHONY : test-example-02a
test-example-02a : ./build/example-02a.exe
	diff -u ./example/output/example-02a.txt <($<) 1>&2

.PHONY : test-example-02b
test-example-02b : ./build/example-02b.exe
	diff -u ./example/output/example-02b.txt <($<) 1>&2

.PHONY : test-example-03a
test-example-03a : ./build/example-03a.exe
	diff -u ./example/output/example-03a.txt <($<) 1>&2

.PHONY : test-example-03b
test-example-03b : ./build/example-03b.exe
	diff -u ./example/output/example-03b.txt <($<) 1>&2

.PHONY : test-example-03c
test-example-03c : ./build/example-03c.exe
	diff -u ./example/output/example-03c.txt <($<) 1>&2

.PHONY : test-example-10a
test-example-10a : ./build/example-10a.exe
	diff -u ./example/output/example-10a.txt <($<) 1>&2

.PHONY : test-example-99z
test-example-99z : ./build/example-99z.exe
	diff -u ./example/output/example-99z.txt <($<) 1>&2

################################################################################
# document (Doxygen)
################################################################################

.PHONY : document
document :
	cd ./document/ && $(MAKE)

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
