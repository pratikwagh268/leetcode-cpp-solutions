cmake_minimum_required(VERSION 3.10)

project(leetcode_cpp_solutions LANGUAGES CXX)

# ---------------------------
# C++ standard
# ---------------------------
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# ---------------------------
# Output directory for binaries
# ---------------------------
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# ---------------------------
# Include paths
# ---------------------------
include_directories(${PROJECT_SOURCE_DIR})

# ---------------------------
# Auto-discover test sources
# ---------------------------
file(GLOB TEST_SOURCES
    "${PROJECT_SOURCE_DIR}/tests/test_*.cpp"
)

# Safety check
if (NOT TEST_SOURCES)
    message(FATAL_ERROR "No test_*.cpp files found in tests/")
endif()

# ---------------------------
# Create one executable per test
# ---------------------------
foreach(test_src ${TEST_SOURCES})
    # Extract file name without extension
    get_filename_component(test_name ${test_src} NAME_WE)

    add_executable(${test_name} ${test_src})

    # Compiler warnings
    if (MSVC)
        target_compile_options(${test_name} PRIVATE /W4)
    else()
        target_compile_options(${test_name} PRIVATE -Wall -Wextra -Wpedantic)
    endif()
endforeach()


# ---------------------------
# Custom clean target
# ---------------------------
add_custom_target(distclean
    COMMAND ${CMAKE_COMMAND} -E rm -rf ${CMAKE_BINARY_DIR}
    COMMENT "Removing entire build directory"
)
