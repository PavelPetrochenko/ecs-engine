#!/bin/bash
cat logo.txt

if "%1"==""
then
    TYPE="Debug"
elif "%1"=="Debug"
then
    TYPE="Debug"
elif "%1"=="Release"
then
    TYPE="Release"
fi

if "%2"=="-init"
then
    mkdir build
    cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -DCMAKE_BUILD_TYPE=${TYPE} -G Ninja -S . -B build/
fi

cmake --build build/ --config ${TYPE}
ls build/${TYPE}/windows/x64/
