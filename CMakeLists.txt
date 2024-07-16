cmake_minimum_required(VERSION 3.10)
project(WebScraper)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add vcpkg toolchain file
set(CMAKE_TOOLCHAIN_FILE "C:/Users/Jordan/Desktop/Workspace/CSE310/Web-Scrapper/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

# Find and link libcurl
find_package(CURL REQUIRED)

# Include directories
include_directories(${CURL_INCLUDE_DIRS})

# Add source files
add_executable(WebScraper
    src/main.cpp
    src/scraper.cpp
)

# Link libcurl library
target_link_libraries(WebScraper ${CURL_LIBRARIES})
