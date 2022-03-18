.PHONY : all
all : clean build

.PHONY : build
build :
	doxygen > /dev/null
    # NOTE doxygen コマンドの標準出力は量が多いため破棄する.
    #      無論, 標準エラー出力は破棄しない.
    #      ドキュメントコメントが不足している場合は,
    #      doxygen コマンドの warning として標準エラー出力に出力される.

.PHONY : clean
clean :
	$(RM) -r ./html/*
