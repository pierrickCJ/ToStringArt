cmake_minimum_required(VERSION 3.21)

project(BranchAndBound
    VERSION 1.0
    LANGUAGES CXX
)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Qt
set(CMAKE_PREFIX_PATH "D:/Qt/6.11.2/msvc2022_64")
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Enable Qt automatic processing
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Sources
set(SOURCES
    src/main.cpp

    src/app/MainWindow.cpp

    src/app/MainWindow.h
    src/solver/solver.cpp

    src/utilities/image.cpp

)

# Headers
set(HEADERS
    src/app/MainWindow.h

    src/solver/solver.h
    src/utilities/image.h

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

# Qt libraries
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Qt6::Widgets
)