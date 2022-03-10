# Boost.Test によるユニットテスト

  + Ubuntu 20.04.3 LTS
  + libboost1.71-dev
  + libboost-test1.71.0

## libboost-dev をインストールする

```
sudo apt install libboost-dev -y
```

## libboost-test-dev をインストールする

> Boost.Test をヘッダオンリーライブラリとして使用する場合, この手順は必要ない.<br>

```
sudo apt install libboost-test-dev -y
```

  > `libboost-test-dev` をインストールすることによって,
  > 下記の静的ライブラリが生成される.<br>
  >
  > ```
  > /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.a
  > ```

## Boost.Test をヘッダオンリーライブラリとして使用する

  下記のヘッダファイルをインクルードする.<br>

  + `boost/test/included/unit_test.hpp`

## Boost.Test を静的ライブラリとして使用する

  下記のヘッダファイルをインクルードする.<br>

  + `boost/test/unit_test.hpp`

  また, テストモジュール(後述)をコンパイルする際に,
  下記のコンパイルオプションを指定する.<br>

  + `-l boost_unit_test_framework`
  + `-static`

## テストモジュールとテストケースを実装する

  テストモジュール及びテストケースの実装については, 下記を参照のこと :<br>

  + テストモジュール
    + [test-module.c++](../test/test-module.c++)
  + `FizzBuzz` クラスのテストケース
    + [fizz-buzz.class.test-case.h++](../test/include/fizz-buzz++/fizz-buzz.class.test-case.h++)

## テストモジュールを実行する

  特に必要な手順などはなく, コンパイルしたテストモジュールを実行すればよい.<br>
