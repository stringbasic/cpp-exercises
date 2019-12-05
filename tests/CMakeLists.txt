find_package(GTest CONFIG REQUIRED)

file(GLOB tests_SOURCES "*_test.cpp")

include_directories("../src")
add_executable(cpp_exercises_tests
  ${tests_SOURCES}
  ../src/UglyNumber.cpp
)
target_link_libraries(cpp_exercises_tests PUBLIC GTest::gtest_main)
add_test(cpp_exercises cpp_exercises_tests)
