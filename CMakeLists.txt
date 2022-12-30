cmake_minimum_required(VERSION 3.18)

project(
    cardg 
    VERSION 0.1.0
    DESCRIPTION "Card game"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_compile_options(-Wall -Weffc++ -Wextra -Wsign-conversion -pedantic -Werror)

# include(CTest)
# enable_testing()

# NCURSES
# find_path(NCURSES_INC ncurses PATHS /usr/local/Cellar/ncurses)
# set(NCURSES_INC /usr/local/Cellar/ncurses/6.3/include)
# message(STATUS "NCURSES_INC: [${NCURSES_INC}]")
# find_library(NCURSES_LIB ncurses PATHS /usr/local/Cellar/ncurses)
# set(NCURSES_LIB /usr/local/Cellar/ncurses/6.3/lib/libncursesw.dylib)
# message(STATUS "NCURSES_LIB: [${NCURSES_LIB}]")

add_executable(cardg main.cpp src/card.cpp src/deck.cpp src/hand.cpp include/card.h include/deck.h include/hand.h)
include_directories(${NCURSES_INC})
target_include_directories(cardg PRIVATE include)
target_link_libraries(cardg ${NCURSES_LIB})

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
