file(GLOB_RECURSE SOURCES "*.hpp" "*.cpp")

add_executable(Ultra16Main
    ${SOURCES}
)


target_link_libraries(Ultra16Main PRIVATE
    PRIVATE Ultra16Lib
    PRIVATE SystemC::systemc
)
