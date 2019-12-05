[![Build Status](https://travis-ci.org/stringbasic/cpp-exercises.svg?branch=master)](https://travis-ci.org/stringbasic/cpp-exercises)
[![codecov](https://codecov.io/gh/stringbasic/cpp-exercises/branch/master/graph/badge.svg)](https://codecov.io/gh/stringbasic/cpp-exercises)

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

