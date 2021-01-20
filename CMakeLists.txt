cmake_minimum_required(VERSION 3.13)
project(ElfFileParser)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(file)
include_directories(type)
include_directories(util)

add_executable(ElfFileParser
        file/arm64-v8a/foo.o
        file/arm64-v8a/libfoo.so
        file/armeabi-v7a/foo.o
        file/armeabi-v7a/libfoo.so
        file/x86/foo.o
        file/x86/libfoo.so
        type/elf.h
        util/Formatter.cpp
        util/Formatter.h
        util/Printer.cpp
        util/Printer.h
        CMakeLists.txt
        ElfFileParser.cpp
        ElfParser.cpp
        ElfParser.h)
