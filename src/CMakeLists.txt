
add_executable(GameXVI
    main.cpp
)

target_link_libraries(GameXVI
    GameXVILib
)

file(GLOB_RECURSE GAME_XVI_SOURCES "*.cpp" "*.hpp")
list(FILTER GAME_XVI_SOURCES EXCLUDE REGEX ".*main.cpp$")

add_library(GameXVILib
    ${GAME_XVI_SOURCES}
)

target_link_libraries(GameXVILib
    PUBLIC SystemC::systemc
)

target_include_directories(GameXVILib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
