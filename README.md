[![Build Status](https://github.com/stringbasic/cpp-exercises/workflows/CI/badge.svg)](https://github.com/stringbasic/cpp-exercises/actions)
[![codecov](https://codecov.io/gh/stringbasic/cpp-exercises/branch/master/graph/badge.svg)](https://codecov.io/gh/stringbasic/cpp-exercises)
[![clang-format Check](https://github.com/stringbasic/cpp-exercises/actions/workflows/clang-format-check.yml/badge.svg)](https://github.com/stringbasic/cpp-exercises/actions/workflows/clang-format-check.yml)
[![CodeQL](https://github.com/stringbasic/cpp-exercises/actions/workflows/codeql-analysis.yml/badge.svg)](https://github.com/stringbasic/cpp-exercises/actions/workflows/codeql-analysis.yml)

# To compile

```
cmake . -B_builds
cmake --build _builds
```

Release version:
```
cmake . -B_builds -DCMAKE_BUILD_TYPE=Release
cmake --build _builds --config Release
```

# To test
```
make -C _builds/ test
```

# To run
```
./_builds/out/runner
Run C++ exercises
Usage:
  runner [OPTION...]

      --uglyNumber arg          checks if given number is ugly
      --isAbundantNumber arg    checks if given number is abundante
      --listAbundantNumbers arg
                                list abundant numbers until limit given
      --setExerciseCount arg    set exercise array size
  -h, --help                    print this help

```

# How to execute code coverage
```
./codecoverage.sh
```

