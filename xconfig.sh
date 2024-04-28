# Environment variables C_COMPILER and CXX_COMPILER have to be 
# defined in your .bashrc (or .zshrc if you're using zsh) file.
# Usually path to compiler looks like "/usr/bin/gcc" or "/usr/bin/clang".
# However, it might differ if you've installed it in other directory.

/usr/bin/cmake --no-warn-unused-cli \
    -DCMAKE_BUILD_TYPE:STRING=Debug \
    -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE \
    -DCMAKE_C_COMPILER:FILEPATH=${C_COMPILER} \
    -DCMAKE_CXX_COMPILER:FILEPATH=${CXX_COMPILER} \
    -S${PWD} \
    -B${PWD}/build \
    -G Ninja
