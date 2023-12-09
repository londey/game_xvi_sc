

file(GLOB_RECURSE SOURCES "*.cpp" "*.hpp")

add_executable(Ultra16Test
  ${SOURCES}
)

target_include_directories(Ultra16Test
  PRIVATE ../src
  PRIVATE .
)

find_package(SystemCLanguage CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

target_link_libraries(Ultra16Test
  GTest::gtest
  GTest::gtest_main
  SystemC::systemc
  Ultra16Lib
)

add_test(NAME Ultra16Test COMMAND Ultra16Test)
