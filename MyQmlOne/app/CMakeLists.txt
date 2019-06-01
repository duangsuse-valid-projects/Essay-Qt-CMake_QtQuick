qt5_add_resources(MAIN_RES resources.qrc)

include_directories(inc)

add_executable(myqtqck src/main.c++ ${MAIN_RES})

target_link_libraries(myqtqck Qt5::Gui Qt5::Qml)


