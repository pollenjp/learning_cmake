# CMakeのバージョンを設定
# block comment (>=3.0)
cmake_minimum_required(VERSION 3.0)


# プロジェクト名と使用する言語を設定
project(#[[<PROJECT-NAME>]] test_cmake
        #[[ [LANGUAGES]  ]] CXX)

# debug flag 
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O0 -g")

# サブディレクトリを登録
add_subdirectory(src)
add_subdirectory(test)
