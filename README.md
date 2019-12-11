[![Build Status](https://travis-ci.org/stringbasic/cpp-exercises.svg?branch=master)](https://travis-ci.org/stringbasic/cpp-exercises)
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


 Check whether a given number is an Ugly number:
----------------------------------------------------
Input an integer number: 25
It is an Ugly number.
```

# How to execute code coverage
```
./codecoverage.sh
```

