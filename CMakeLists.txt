cmake_minimum_required(VERSION 3.10)
project(BasicUT)

# Основная программа
add_executable(BasicUT
    src/main.cpp
    src/Converter.cpp
)

# Тесты
add_executable(BasicUT_Tests
    tests/testMain.cpp
    src/Converter.cpp
)