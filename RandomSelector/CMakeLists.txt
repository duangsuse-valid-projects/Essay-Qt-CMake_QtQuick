cmake_minimum_required (VERSION 3.0)
project (RandomSelector)

find_package (Qt5Widgets CONFIG REQUIRED)

set (CMAKE_INCLUDE_CURRENT_DIR ON)

set (CMAKE_AUTOMOC ON)
set (CMAKE_AUTOUIC ON)

##
set (sRandomSelector src/main.cpp src/randomselector.cpp src/float.hpp)

add_executable(randomseletor ${sRandomSelector})

target_link_libraries(randomseletor Qt5::Widgets)

install (TARGETS randomseletor DESTINATION bin)
