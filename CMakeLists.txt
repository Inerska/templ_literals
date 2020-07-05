project(templ_literals)

set(HEADERS
        include/templ_literals/main.hpp)

set(SOURCES
        src/main.cpp)

set(CMAKE_CXX_STANDARD 11)
add_executable(templ_literals ${SOURCES} ${HEADERS})