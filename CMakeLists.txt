cmake_minimum_required(VERSION 3.14)
project(PR3_3_A)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(../PR3_3_A/lib/googletest)

include_directories(/opt/homebrew/opt/ncurses/include)
link_directories(/opt/homebrew/opt/ncurses/lib)

add_executable(PR3_3_A
        classes/BaseFraction.h
        classes/BaseFraction.cpp
        classes/PrivateFraction.h
        classes/PrivateFraction.cpp
        classes/PublicFraction.h
        classes/PublicFraction.cpp
        main.cpp
)

target_link_libraries(PR3_3_A)

add_executable(PR3_3_A_tests
        classes/BaseFraction.h
        classes/BaseFraction.cpp
        classes/PrivateFraction.h
        classes/PrivateFraction.cpp
        tests/tests.cpp
)

target_link_libraries(PR3_3_A_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR3_3_A_tests)
