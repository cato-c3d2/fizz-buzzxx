# fizz-buzz++

  fizz-buzz++ は
  **「ぼくのかんがえたさいきょうの FizzBuzz もんだい」** を地で行く
  C++ ライブラリです.<br>

```c++
#include <fizz-buzz++.h++>
#include <iostream>

auto main() -> int
{
    using namespace fizz_buzzxx;

    for (auto && fizz_buzz : FizzBuzzSequence { 1, 100 }) {
        std::cout << fizz_buzz << std::endl;
    }
}
```

## 特徴

  当ライブラリは FizzBuzz 問題の様々なニーズに対応します.<br>
  例えば ...<br>

  + 3 ではなく 4 で割り切れたときに "Fizz" と出力したい
  + 5 ではなく 6 で割り切れたときに "Buzz" と出力したい
  + "Fizz" ではなく全てアルファベット小文字で "fizz" と出力したい
  + "Buzz" ではなく全てアルファベット大文字で "BUZZ" と出力したい
  + そもそも Fizz は不要!! Buzz だけで充分!!

  ... 等々.<br>
  [example](./example/) に様々なサンプルコードを取り揃えております.<br>

## 要件

  当ライブラリは C++11/14/17 に準拠しています.<br>
  また, 当ライブラリは下記のライブラリに依存しています :<br>

  + Boost String Algorithms Library

  また, 当コードベースをビルドする場合は下記のライブラリ及びソフトウェアが必要となります :<br>

  + make (GNU make)
  + Boost.Test
  + clang-format
  + Doxygen

  詳細は [開発ドキュメント](./document/README.md) をご覧ください.<br>

## 使用方法

  当ライブラリは, ヘッダオンリーライブラリですので,
  下記の一行のインクルードディレクティブを記述するだけで使用可能です :<br>

```c++
#include <fizz-buzz++.h++>
```

  > ただし, 前述の [**要件**](#要件) を満たしていることが条件となります.<br>

  GitHub から当ライブラリのソースコードをダウンロードするか
  `git clone` してご利用ください.<br>

## テスト環境

  当ライブラリのテストは下記の環境で実施しています :<br>

  + OS

|  |  |  |
|--|--|--|
| Linux | Ubuntu | 20.04.4 |

```
$ lsb_release -a
No LSB modules are available.
Distributor ID: Ubuntu
Description:    Ubuntu 20.04.4 LTS
Release:        20.04
Codename:       focal
```

  + コンパイラ

|  |  |  |
|--|--|--|
| GCC   | g++     | 9.4.0  |
| Clang | clang++ | 10.0.0 |

```
$ g++ --version
g++ (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

```
$ clang++ --version
clang version 10.0.0-4ubuntu1
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
```

  > 上記以外の環境での動作は未確認ですので予めご了承ください.

## ライセンス

  当ライブラリは [Boost Software License, Version 1.0](LICENSE) で配布されます.<br>
