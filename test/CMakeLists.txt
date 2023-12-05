

file(GLOB_RECURSE SOURCES "*.cpp" "*.hpp")

add_executable(Ultra16Test
  ${SOURCES}
)

target_include_directories(Ultra16Test
  PRIVATE ../src
  PRIVATE .
)

target_link_libraries(Ultra16Test
  gtest_main
  gtest
  Ultra16Lib
  SystemC::systemc
)
