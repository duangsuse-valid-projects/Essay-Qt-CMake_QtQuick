qt5_add_resources(MAIN_RES resources.qrc)

add_executable(qtquicktest main.cpp ${MAIN_RES})

target_link_libraries(qtquicktest Qt5::Qml Qt5::Gui)
