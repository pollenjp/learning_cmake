# CMakeの使い方（その１） - Qiita

- [CMakeの使い方（その１） - Qiita](https://qiita.com/shohirose/items/45fb49c6b429e8b204ac)
    - ステップ２：静的・共有ライブラリを作成


```shell
user@localpc%
mkdir build && cd build
user@localpc%
cmake -D GREETINGS_BUILD_SHARED_LIBS=OFF ..
user@localpc%
make
user@localpc%
./test/a.out
Hello!
Good morning!
```

```shell
user@localpc%
```
