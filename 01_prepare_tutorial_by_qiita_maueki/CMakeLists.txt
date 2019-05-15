# cmake チュートリアルを読む前に - Qiita
# https://qiita.com/maueki/items/9cce88f6122e205754c5

# VERSION >= 3.1
#   because `PKG_CONFIG_PATH` (https://qiita.com/maueki/items/9cce88f6122e205754c5#pkg_config_path%E3%82%92%E8%A8%AD%E5%AE%9A%E3%81%99%E3%82%8B)
cmake_minimum_required(VERSION 3.1)

# project
project(#[[<PROJECT-NAME>]] test_project)

add_executable(#[[<name>]] create_window
               #[[source]] create_window.c)

find_package(#[[<package>]] X11 REQUIRED)
target_link_libraries(#[[<target>]] create_window
                      #[[<item>]] ${X11_LIBRARIES})

