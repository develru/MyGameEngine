cmake_minimum_required(VERSION 2.8.8)
project(SandboxGame)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5Widgets REQUIRED)

add_executable(SandboxGame SandboxGame.cpp MyGlWindow.cpp)
qt5_use_modules(SandboxGame Widgets)

