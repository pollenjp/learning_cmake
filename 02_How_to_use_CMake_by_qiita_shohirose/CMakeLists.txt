# CMakeのバージョンを設定
# block comment (>=3.0)
cmake_minimum_required(VERSION 3.0)


# プロジェクト名と使用する言語を設定
project(#[[<PROJECT-NAME>]] test_cmake
        #[[ [LANGUAGES]  ]] CXX)


# GREETINGS_BUILD_SHARED_LIBSというオプションを作成。デフォルトをOFFに設定。
option(#[[ <option_variable> ]] GREETINGS_BUILD_SHARED_LIBS
       #[[ "help string"     ]] "build greetings as a shared library"
       #[[ [initial value]   ]] OFF)
# hello.cppとgood_morning.cppをコンパイルして共有ライブラリlibgreetings.soを作成
if(GREETINGS_BUILD_SHARED_LIBS)
  add_library(greetings SHARED hello.cpp good_morning.cpp)
  add_library(#[[ <name>                     ]] greetings
              #[[ [STATIC | SHARED | MODULE] ]] SHARED
              #[[ source1 [source2 ...]      ]] hello.cpp
                                                good_morning.cpp)
else()
  add_library(#[[ <name>                     ]] greetings
              #[[ [STATIC | SHARED | MODULE] ]] STATIC
              #[[ source1 [source2 ...]      ]] hello.cpp
                                                good_morning.cpp)
endif()


# a.outを作成する際にlibgreetings.soをリンク
target_link_libraries(a.out greetings)
