# Doxygen によるドキュメンテーション

  + Ubuntu 20.04.3 LTS
  + doxygen 1.8.17

## doxygen をインストールする

```
sudo apt install doxygen -y
```

## graphviz をインストールする

  > Doxygen はグラフの画像ファイルの生成に `graphviz` (`dot`) を使用している.<br>
  > `graphviz` がインストールされていない環境でドキュメントの生成を行うと,
  > 多数のエラーが発生するため, 予め `graphviz` をインストールしておく.<br>

```
sudo apt install graphviz -y
```

## Doxyfile を生成する

```
doxygen -g
```

  > プロジェクトのルートディレクトリで上記のコマンドを実行することで,
  > プロジェクトのルートディレクトリに `Doxyfile` が生成される.<br>

## Doxyfile を修正する

```
PROJECT_NAME           = "fizz-buzz++"
```

  > プロジェクト名を設定する.<br>

```
OUTPUT_DIRECTORY       = document
```

  > Doxygen によって生成されたファイルを格納するディレクトリを設定する.<br>
  > この場合, `HTML` のドキュメントは
  > `{プロジェクトのルートディレクトリ}/document/html/` に出力されるようになる.<br>

```
CREATE_SUBDIRS         = YES
```

  > デフォルトでは `NO` が指定されており,
  > Doxygen によって生成されたファイルは単一階層に格納される.<br>
  > ここでは `YES` を指定することで,
  > Doxygen によって生成されたファイルが複数階層に分けて格納されるように変更する.<br>

```
RECURSIVE              = YES
```

  > `RECURSIVE` に `YES` を指定しないと,
  > サブディレクトリにあるソースファイルがドキュメンテーションの対象にならない.<br>

```
GENERATE_LATEX         = NO
```

  > `HTML` のドキュメントだけで充分なため, `LaTeX` のドキュメントは生成しない.<br>

## ドキュメントを生成する

```
doxygen
```

  > プロジェクトのルートディレクトリで上記のコマンドを実行することで,
  > `Doxyfile` の設定内容に従ってドキュメントが生成される.<br>