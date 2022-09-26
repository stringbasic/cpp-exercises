add_executable(runner runner.cpp
  UglyNumber.cpp
  AbundantNumber.cpp
  PerfectNumber.cpp
  SetExercise.cpp
)

target_link_libraries(runner PUBLIC cxxopts::cxxopts)
