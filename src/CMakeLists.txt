

file(GLOB_RECURSE SOURCES "*.cpp" "*.hpp")

add_library(Ultra16Lib
    ${SOURCES}
)

target_compile_features(Ultra16Lib
    PUBLIC cxx_std_20
)

target_include_directories(Ultra16Lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Ultra16Lib
    PUBLIC SystemC::systemc
)

target_include_directories(Ultra16Lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)
