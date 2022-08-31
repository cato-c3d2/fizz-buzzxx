# サンプルコード 目録

## [example-00a.c++](./example-00a.c++)

  当ライブラリの最も基本的な使用方法を想定したサンプルコード.<br>
  クラス [`FizzBuzzSequence`](../include/fizz-buzz++/fizz-buzz-sequence.class.h++)
  と範囲 for 文を使用している.<br>

## [example-01a.c++](./example-01a.c++)

  クラス [`FizzBuzzSequence`](../include/fizz-buzz++/fizz-buzz-sequence.class.h++)
  とイテレータを使用したサンプルコード.<br>
  イテレータの走査には for 文を使用している.<br>

## [example-01b.c++](./example-01b.c++)

  クラス [`FizzBuzzSequence`](../include/fizz-buzz++/fizz-buzz-sequence.class.h++)
  とイテレータを使用したサンプルコード.<br>
  イテレータの走査には while 文を使用している.<br>

## [example-01c.c++](./example-01c.c++)

  クラス [`FizzBuzzSequence`](../include/fizz-buzz++/fizz-buzz-sequence.class.h++)
  とイテレータを使用したサンプルコード.<br>
  イテレータの走査には `std::for_each` を使用している.<br>

## [example-02a.c++](./example-02a.c++)

  FizzBuzz の出力先を変更したサンプルコード.<br>
  出力先のストリームについて,
  標準出力ストリームオブジェクト `std::cout`
  から文字列ストリーム `std::ostringstream` に変更した.<br>

## [example-02b.c++](./example-02b.c++)

  FizzBuzz の出力内容を変更したサンプルコード.<br>
  出力する書式について,
  要素間の区切りを改行からカンマ(+半角スペース)に変更した.<br>

## [example-03a.c++](./example-03a.c++)

  FizzBuzz のルールを変更したサンプルコード.<br>
  変更したルールは下記の通り :<br>
  > - 整数 `n` を `3` で割り切れる場合の文言を `"Fizz++"` とする
  > - 整数 `n` を `5` で割り切れる場合の文言を `"Buzz++"` とする

## [example-03b.c++](./example-03b.c++)

  FizzBuzz のルールを変更したサンプルコード.<br>
  変更したルールは下記の通り :<br>
  > - 文言 `"Fizz"` を出力する条件を「整数 `n` を `4` で割り切れる場合」とする
  > - 文言 `"Buzz"` を出力する条件を「整数 `n` を `6` で割り切れる場合」とする

## [example-03c.c++](./example-03c.c++)

  FizzBuzz のルールを変更したサンプルコード.<br>
  変更したルールは下記の通り :<br>
  > - 整数 `n` を `4` で割り切れる場合に文言 `"Fizz++"` を出力する
  > - 整数 `n` を `6` で割り切れる場合に文言 `"Buzz++"` を出力する

## [example-10a.c++](./example-10a.c++)

  クラス [`FizzBuzz`](../include/fizz-buzz++/fizz-buzz.class.h++)
  と反復処理を使用したサンプルコード.<br>

## [example-99z.c++](./example-99z.c++)

  番外編.<br>
  当ライブラリを使用せず, 一般的な方法で FizzBuzz 問題を実装したサンプルコード.<br>
