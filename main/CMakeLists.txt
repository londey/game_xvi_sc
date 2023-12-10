file(GLOB_RECURSE SOURCES "*.hpp" "*.cpp")

add_executable(Ultra16Main
    ${SOURCES}
)


find_package(SystemCLanguage CONFIG REQUIRED)

target_link_libraries(Ultra16Main PRIVATE
    PRIVATE Ultra16Lib
    PRIVATE SystemC::systemc
)
