find_package(cxxopts CONFIG REQUIRED)

add_executable(runner runner.cpp
  UglyNumber.cpp
  AbundantNumber.cpp
)

target_link_libraries(runner PUBLIC cxxopts::cxxopts)
