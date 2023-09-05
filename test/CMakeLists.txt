

file(GLOB_RECURSE GAME_XVI_TEST_SOURCES "*.cpp" "*.hpp")

add_executable(SystemcDmbTest
  ${GAME_XVI_TEST_SOURCES}
)


target_link_libraries(SystemcDmbTest
  gtest_main
  gtest
  GameXVILib
)
