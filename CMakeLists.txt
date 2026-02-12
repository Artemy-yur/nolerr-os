cmake_minimum_required(VERSION 3.20) # 4.0 еще не вышла, лучше ставить 3.20+
project(Ezy_OS C)

set(CMAKE_C_STANDARD 23)

add_executable(Ezy_OS
        main.c
        file/workfiles.c
        additions/calculator/calculator.c
        additions/timenow.c
        additions/wearth/getWearth.c
        interface/interface.c
        additions/help/help.c
        additions/infos.c
        additions/notich/notich.c
        language/locale_managere.c
        file/workfile.h
)

target_include_directories(Ezy_OS PRIVATE libraru)
target_link_libraries(Ezy_OS ws2_32)


configure_file(additions/help/help.py ${CMAKE_CURRENT_BINARY_DIR}/help.py COPYONLY)
