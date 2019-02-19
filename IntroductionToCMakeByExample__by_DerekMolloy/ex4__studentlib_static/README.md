# Example 4: Building a Static Library (.a)

static library

- [[C言語] 共有ライブラリと静的ライブラリを整理する - Qiita](https://qiita.com/edo_m18/items/b9765ff3313d5a13f82f)
- [静的ライブラリ (.a) の作成と利用](https://www.yunabe.jp/docs/static_library.html)


## Structure

```
 studentlib_shared/
 |-- CMakeLists.txt
 |-- build
 |-- include
 |   \-- Student.h
 \-- src
     \-- Student.cpp
```


## Execution

```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

