cmake_minimum_required(VERSION 3.18)

project(
    cardg 
    VERSION 0.1.0
    DESCRIPTION "Card game"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# include(CTest)
# enable_testing()

add_executable(cardg main.cpp src/card.cpp src/deck.cpp src/hand.cpp include/card.h include/deck.h include/hand.h)
target_include_directories(cardg PRIVATE include)

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
