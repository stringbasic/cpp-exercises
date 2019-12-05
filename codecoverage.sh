#!/bin/bash

#mkdir /tmp/covertests
#cp -R . /tmp/covertests
#cd /tmp/covertests

cmake -H. -B_builds -DHUNTER_STATUS_DEBUG=ON -DCMAKE_BUILD_TYPE=Debug
cmake --build _builds --config Debug
make -C _builds/ test

mkdir -p coverage
cd coverage
for sourceFile in ../src/[A-Z]*.cpp
do
  filename=$(basename "$sourceFile")
  gcov -n -o ../_builds/tests_out/CMakeFiles/cpp_exercises_tests.dir/__/src/$filename.gcno $sourceFile
done
cd ..

lcov --base-directory src/ --directory ./_builds/tests_out/CMakeFiles/cpp_exercises_tests.dir/__/ -c -o coverage.info
genhtml -o coverage -t "CPPExercises test coverage" --num-spaces 4 coverage.info

# executed by CI on success:
# bash <(curl -s https://codecov.io/bash)

indexFile=$(ls $(pwd)/coverage/*index.html)
echo "Check your code coverage results details in file://$indexFile"
