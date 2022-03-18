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
	$(RM) -r ./html/*
