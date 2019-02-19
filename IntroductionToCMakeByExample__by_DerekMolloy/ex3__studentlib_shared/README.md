# Example 3: Building a Shared Library (.so)

shared library

- [[C言語] 共有ライブラリと静的ライブラリを整理する - Qiita](https://qiita.com/edo_m18/items/b9765ff3313d5a13f82f)

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
$ sudo make install
$ ls -1
CMakeFiles/
CMakeCache.txt
Makefile
cmake_install.cmake
install_manifest.txt
libtestStudent.so*
$ cat install_manifest.txt
/usr/lib/libtestStudent.so
```

