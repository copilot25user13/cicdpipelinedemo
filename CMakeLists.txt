cmake_minimum_required(VERSION 3.10)
project(MyCppProject VERSION 1.0.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set compiler flags
if(MSVC)
    add_compile_options(/W4)
else()
    add_compile_options(-Wall -Wextra -pedantic)
endif()

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/main.cpp
    src/calculator.cpp
    src/utils.cpp
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Enable testing
enable_testing()


# Create separate test executables for each test file
add_executable(test_calculator tests/test_calculator.cpp src/calculator.cpp src/utils.cpp)
add_executable(test_utils tests/test_utils.cpp src/calculator.cpp src/utils.cpp)

# Add tests
add_test(NAME calculator_tests COMMAND test_calculator)
add_test(NAME utils_tests COMMAND test_utils)


# Optional: Create a library for reusable code
add_library(mylib STATIC
    src/calculator.cpp
    src/utils.cpp
)

# Link the library to the main executable (optional)
# target_link_libraries(${PROJECT_NAME} mylib)
