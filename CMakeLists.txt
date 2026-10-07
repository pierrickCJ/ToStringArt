cmake_minimum_required(VERSION 3.21)
set(CMAKE_TOOLCHAIN_FILE "C:/Program Files/Microsoft Visual Studio/18/Community/VC/vcpkg/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "Vcpkg toolchain file")
project(BranchAndBound
    VERSION 1.0
    LANGUAGES CXX
)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


#Eigen
find_package(Eigen3)
# Qt
find_package(Qt6 REQUIRED COMPONENTS Widgets)
#CImg
find_package(CImg)

# Enable Qt automatic processing
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Sources
set(SOURCES
    src/main.cpp
    src/app/MainWindow.cpp
    src/app/MainWindow.h
    src/solver/Solver.cpp
    src/utilities/Image.cpp
    src/utilities/Printer.cpp
    src/controller/Controller.cpp

)

# Qt Designer
set(FORMS
    src/app/MainWindow.ui
)


# Executable
add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${FORMS}
)

# Include directories
target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/src
)

# link libraries
target_link_libraries(${PROJECT_NAME}

    PRIVATE
        CImg
        Eigen3::Eigen
        Qt6::Widgets
)
