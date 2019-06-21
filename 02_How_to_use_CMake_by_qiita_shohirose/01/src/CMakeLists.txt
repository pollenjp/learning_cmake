#-------------------------------------------------------------------------------
# GREETINGS_BUILD_SHARED_LIBSというオプションを作成。デフォルトをOFFに設定。
option(#[[ <option_variable> ]] GREETINGS_BUILD_SHARED_LIBS
       #[[ "help string"     ]] "build greetings as a shared library"
       #[[ [initial value]   ]] OFF)
# hello.cppとgood_morning.cppをコンパイルして共有ライブラリlibgreetings.soを作成
if(GREETINGS_BUILD_SHARED_LIBS)
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
#-------------------------------------------------------------------------------
# 上記の記述は本来であれば変数BUILD_SHARED_LIBSのON,OFFによってSHARED,STATICを
# 操作すべきであるが、ここでは練習。
#-------------------------------------------------------------------------------


# greetingライブラリのインクルードディレクトリを教えてあげる
# PROJECT_SOURCE_DIRはこのプロジェクトのルートディレクトリの絶対パス
target_include_directories(#[[ <target> ]] greetings
                           #[[ [SYSTEM] ]]
                           #[[ [BEFORE] ]]
                           #[[<INTERFACE|PUBLIC|PRIVATE>]] PUBLIC
                           #[[ [items1...] ]] ${PROJECT_SOURCE_DIR}/include)
