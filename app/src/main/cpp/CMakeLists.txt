
# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.
cmake_minimum_required(VERSION 3.18.1)
project("experimental")
add_library(
        experimental
        SHARED
        experimental.cpp
        dum.cpp
        )
find_library(
        log-lib
        log)
target_link_libraries(
        experimental
        ${log-lib})
