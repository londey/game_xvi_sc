cmake_minimum_required(VERSION 3.21)

if (NOT DEFINED CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 23)
endif()

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)

set(CMAKE_TOOLCHAIN_FILE "/opt/vcpkg/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "Vcpkg toolchain file")

# Workaround for vcpkg targets not able to be found
list(APPEND CMAKE_PREFIX_PATH "/opt/vcpkg/installed/x64-linux/share/Microsoft.GSL")
list(APPEND CMAKE_PREFIX_PATH "/opt/vcpkg/installed/x64-linux/share/fmt")
list(APPEND CMAKE_PREFIX_PATH "/opt/vcpkg/installed/x64-linux/share/gtest")
list(APPEND CMAKE_PREFIX_PATH "/opt/vcpkg/installed/x64-linux/share/ms-gsl")
list(APPEND CMAKE_PREFIX_PATH "/opt/vcpkg/installed/x64-linux/share/systemc")
list(APPEND CMAKE_PREFIX_PATH "/opt/vcpkg/installed/x64-linux/share/systemclanguage")
list(APPEND CMAKE_PREFIX_PATH "/opt/vcpkg/installed/x64-linux/share/systemctlm")

project(
  systemc_dmg
  VERSION 0.1.0
  DESCRIPTION ""
  HOMEPAGE_URL "https://github.com/londey/systemc-dmg"
  LANGUAGES CXX C)

add_subdirectory(main)
add_subdirectory(src)

include(CTest)

add_subdirectory(test)
