@echo off
cat logo.txt

if "%1"=="" (set TYPE="Debug")
if "%1"=="Debug" (set TYPE="Debug")
if "%1"=="Release" (set TYPE="Release")

if "%2"=="-init" (
    mkdir build
    cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=1 -DCMAKE_BUILD_TYPE=%TYPE% -G Ninja -S . -B build/
)

cmake --build build/ --config %TYPE%
ls -al build/%TYPE%/windows/x64/
