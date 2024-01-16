cmake_minimum_required(VERSION 3.28)
project(Notepad)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})
# include(CMakePrintHelpers)
# cmake_print_variables(${Protobuf_INCLUDE_DIRS})
protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS proto/user.proto proto/project.proto proto/version.proto)

# cmake_print_variables(${PROTO_SRCS})
# cmake_print_variables(${PROTO_HDRS})

set(SOURCE_FILES
    src/notepad.cpp
    modules/defproject.cpp
    modules/fileoperations.cpp
    modules/user.hpp
    modules/versions.hpp
)


add_executable(notepad ${SOURCE_FILES} ${PROTO_SRCS} ${PROTO_HDRS})

target_compile_definitions(notepad PRIVATE cxx_std_17)
target_link_libraries(notepad PRIVATE pthread ${Protobuf_LIBRARIES})
