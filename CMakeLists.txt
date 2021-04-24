cmake_minimum_required(VERSION 3.13.4)

project(hands_on_cmake VERSION 2.0)

add_executable(${PROJECT_NAME} main.c add_op.c)
configure_file(OLASConfig.h.in OLASConfig.h)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

option(USE_LIB "Check to add library" ON)
if(USE_LIB)
	add_subdirectory(multi_lib)
	target_include_directories(${PROJECT_NAME} PRIVATE multi_lib)
	target_link_libraries(${PROJECT_NAME} multi_lib)
endif()

