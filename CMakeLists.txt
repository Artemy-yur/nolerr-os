cmake_minimum_required(VERSION 4.0)
project(Ezy_OS C)

set(CMAKE_C_STANDARD 23)

add_executable(Ezy_OS main.c
        file/workfiles.c
        INIT.h
        additions/calculator.c
        libraru/initlibery.h
        libraru/brbr.h
        additions/timenow.c)
