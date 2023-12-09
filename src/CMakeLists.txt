

file(GLOB_RECURSE SOURCES "*.cpp" "*.hpp")

add_library(Ultra16Lib
    ${SOURCES}
)

target_include_directories(Ultra16Lib
    PUBLIC "include"
    PRIVATE "."
)

find_package(SystemCLanguage CONFIG REQUIRED)

target_link_libraries(Ultra16Lib
    PUBLIC SystemC::systemc
)
