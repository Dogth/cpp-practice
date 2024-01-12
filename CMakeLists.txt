cmake_minimum_required(VERSION 3.16)
project(CppPractice)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(CppPractice main.cpp)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

include(GoogleTest)

file(GLOB TEST "tests/*.cc")
foreach(FILE ${TEST})
  get_filename_component(FILE_NAME ${FILE} NAME_WE )
  add_executable(${FILE_NAME} ${FILE})
  target_link_libraries(${FILE_NAME} GTest::gtest_main)
  gtest_discover_tests(${FILE_NAME})
endforeach()



