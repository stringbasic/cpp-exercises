[![Build Status](https://github.com/stringbasic/cpp-exercises/workflows/CI/badge.svg)](https://github.com/stringbasic/cpp-exercises/actions)
[![codecov](https://codecov.io/gh/stringbasic/cpp-exercises/branch/master/graph/badge.svg)](https://codecov.io/gh/stringbasic/cpp-exercises)
[![Total alerts](https://img.shields.io/lgtm/alerts/g/stringbasic/cpp-exercises.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/stringbasic/cpp-exercises/alerts/)
[![Language grade: C/C++](https://img.shields.io/lgtm/grade/cpp/g/stringbasic/cpp-exercises.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/stringbasic/cpp-exercises/context:cpp)

# To compile
```
cmake -H. -B_builds -DHUNTER_STATUS_DEBUG=ON -DCMAKE_BUILD_TYPE=Release
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
  -h, --help                    print this help

```

# How to execute code coverage
```
./codecoverage.sh
```

