cmake_minimum_required(VERSION 3.16)

project(QtOpenGLProject LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt6 COMPONENTS Core Gui Widgets OpenGL OpenGLWidgets REQUIRED)
if (NOT Qt6_FOUND)
    find_package(Qt5 COMPONENTS Core Gui Widgets OpenGL REQUIRED)
endif()

set(SOURCES
    main.cpp
    mainwindow.cpp
    openglwidget.cpp
)

set(HEADERS
    mainwindow.h
    openglwidget.h
)

set(FORMS
    mainwindow.ui
)

add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${FORMS}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt${QT_VERSION_MAJOR}::Core
    Qt${QT_VERSION_MAJOR}::Gui
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::OpenGL
)

if (Qt6_FOUND)
    target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::OpenGLWidgets)
endif()

if (WIN32)
    target_link_libraries(${PROJECT_NAME} PRIVATE opengl32 glu32)
elseif (UNIX AND NOT APPLE)
    target_link_libraries(${PROJECT_NAME} PRIVATE GL GLU)
endif()

# Deployment rules
if (QNX)
    set(CMAKE_INSTALL_PREFIX /tmp/${PROJECT_NAME}/bin)
elseif (UNIX AND NOT ANDROID)
    set(CMAKE_INSTALL_PREFIX /opt/${PROJECT_NAME}/bin)
endif()

install(TARGETS ${PROJECT_NAME}
    RUNTIME DESTINATION ${CMAKE_INSTALL_PREFIX}
)