# CMake

- CMake official
  - [CMake](https://cmake.org/)
  - [Documentation | CMake](https://cmake.org/documentation/)

1. [Introduction to CMake by Example | derekmolloy.ie](http://derekmolloy.ie/hello-world-introductions-to-cmake/)
1. [Tutorial 1: Let's start with CMake | Learning CMake: A beginner's guide](
    https://tuannguyen68.gitbooks.io/learning-cmake-a-beginner-s-guide/content/chap1/chap1.html)
1. [Quick CMake Tutorial - Help | CLion](https://www.jetbrains.com/help/clion/quick-cmake-tutorial.html)

---

[CMake資料 - ryamadaのコンピュータ・数学メモ](https://ryamada.hatenadiary.jp/entry/20151024/1445555866)

1. [cmake チュートリアルを読む前に - Qiita](https://qiita.com/maueki/items/9cce88f6122e205754c5)
2. [CMakeの使い方（その１） - Qiita](https://qiita.com/shohirose/items/45fb49c6b429e8b204ac)
3. [CMake チュートリアル — Cmake-Tutorial](http://opencv.jp/cmake/cmake_tutorial.html)

---

- [CMakeのお勉強（１） - 空飛ぶロボットのつくりかた](http://robonchu.hatenablog.com/entry/2018/10/20/231304)
- [CMakeのお勉強（2） - 空飛ぶロボットのつくりかた](http://robonchu.hatenablog.com/entry/2018/10/21/095754)


---


## MEMO

- `#[[xxx]]` : xxxはコメント扱い
- `$ cmake -D XXX=yyy` : 値`yyy`を持つ変数`XXX`を渡す


| 変数 | 意味 |
|---|---|
| `BUILD_SHARED_LIBS` | 共有ライブラリにするか否か。`add_library()`に影響を与える。 |
| `PROJECT_SOURCE_DIR` | Top level source directory for the current project. This is the source directory of the most recent `project()` command. |
| [`INCLUDE_DIRECTORIES`](https://cmake.org/cmake/help/v3.0/prop_tgt/INCLUDE_DIRECTORIES.html#prop_tgt:INCLUDE_DIRECTORIES) | - |
| `CMAKE_CXX_STANDARD` | [cmake-compile-features(7)](https://cmake.org/cmake/help/v3.15/manual/cmake-compile-features.7.html#optional-compile-features) |
| `CXX_STANDARD` | [cmake-compile-features(7)](https://cmake.org/cmake/help/v3.15/manual/cmake-compile-features.7.html#optional-compile-features) |


| Command | 機能 |
|---|---|
| `cmake_minimum_required(VERSION major.minor[.patch[.tweak]] [FATAL_ERROR])` | - |
| `project(<PROJECT-NAME> [LANGUAGES <language-name>...])` | プロジェクト名。`LANGUAGES`には`C,CXX,CUDA,Fortran,ASM`を指定できる。[link](https://cmake.org/cmake/help/latest/command/project.html?highlight=project) |
| `add_executable(<name> source1 [source2 ...])` | `<name>`という実行ファイルの作成とその必要ファイル（source）。 |
| `find_package(<package> [version] [EXACT] [QUIET] [MODULE] [REQUIRED] [[COMPONENTS] [components...]] [OPTIONAL_COMPONENTS components...] [NO_POLICY_SCOPE])` | `<package>`パッケージを探す。`QUIET`は見つからなかったときにメッセージログを吐かない。`REQUIRED`をつけると見つからなかったときにエラーで中止。 |
| `target_link_libraries(<target> ... <item>... ...)` | `<target>`ファイルに`<item>`ライブラリをリンクする。`findpackage()`で取り込まれた変数(`XXX_LIBRARYS`)に入っている値等が`<item>`に該当する。 |
| `add_subdirectory(source_dir [binary_dir] [EXCLUDE_FROM_ALL])` |  |
| `add_library(<name> [STATIC | SHARED | MODULE] [EXCLUDE_FROM_ALL] source1 [source2 ...])` | If no type is given explicitly the type is STATIC or SHARED based on whether the current value of the variable `BUILD_SHARED_LIBS` is ON. |
| `target_include_directories(<target> [SYSTEM] [BEFORE] <INTERFACE|PUBLIC|PRIVATE> [items1...] [<INTERFACE|PUBLIC|PRIVATE> [items2...] ...])` | [link](https://cmake.org/cmake/help/v3.0/command/target_include_directories.html?highlight=target_include_directories#target-include-directories) |
| `include_directories([AFTER|BEFORE] [SYSTEM] dir1 [dir2 ...])` | includeファイルのサーチパスに`dir`を追加。[link](https://cmake.org/cmake/help/v3.0/command/include_directories.html#command:include_directories) |
| `option(<option_variable> "help string describing option" [initial value])` | オプション変数の設定。`cmake -D YYY=zzz`で指定。 |


| xx | xx |
|---|---|
| `set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O0 -g")` | デバッグフラグ |
| `set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -g")` | デバッグフラグ |

