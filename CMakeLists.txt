cmake_minimum_required(VERSION 3.21)

if (NOT DEFINED CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 23)
endif()

set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_VISIBILITY_PRESET hidden)

set(CMAKE_TOOLCHAIN_FILE "$ENV{VCPKG_PATH}/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "Vcpkg toolchain file")

project(
  systemc_dmg
  VERSION 0.1.0
  DESCRIPTION ""
  HOMEPAGE_URL "https://github.com/londey/systemc-dmg"
  LANGUAGES CXX C)

add_subdirectory(src)



add_subdirectory(test)
