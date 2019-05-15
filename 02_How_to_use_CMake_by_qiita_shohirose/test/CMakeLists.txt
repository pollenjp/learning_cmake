add_executable(#[[ <name>  ]] a.out
               #[[ source1 ]] main.cpp)

# a.outを作成する際にlibgreetings.soをリンク
target_link_libraries(#[[ <target> ]] a.out
                      #[[ <item>   ]] greetings)
