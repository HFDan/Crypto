CMAKE_MINIMUM_REQUIRED(VERSION 3.8)

PROJECT(Crypto)

set(SOURCE_FILES "src/Main.cpp")

add_executable(Crypto ${SOURCE_FILES})

target_include_directories(Crypto PUBLIC "${PROJECT_SOURCE_DIR}")