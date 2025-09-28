cmake_minimum_required(VERSION 3.0)
project(CSP-Solver)

# Set the directory where you want to read directories
set(DIRECTORY_ROOT "${CMAKE_CURRENT_SOURCE_DIR}")

# Use file(GLOB ...) to find all directories
file(GLOB SUBDIRECTORIES "${DIRECTORY_ROOT}/*")

# see content of subdirectories
foreach(SUBDIR ${SUBDIRECTORIES})
    if(IS_DIRECTORY ${SUBDIR})
        message("Found directory: ${SUBDIR}")
    endif()
endforeach()

file(GLOB SOURCES GLOB SUBDIRECTORIES "${DIRECTORY_ROOT}/*.cpp")
file(GLOB_RECURSE SOURCESc GLOB SUBDIRECTORIES "${DIRECTORY_ROOT}/*.cc")

file(GLOB_RECURSE SOURCESh GLOB SUBDIRECTORIES "${DIRECTORY_ROOT}/*.hh")


# Add your C++ source files and target as needed
add_executable(${PROJECT_NAME} ${SOURCES} ${SOURCESc} ${SOURCESh})
