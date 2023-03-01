cmake_minimum_required(VERSION 3.10)

project(wxWidgets-template)


add_subdirectory(3rdparty)


file(GLOB SRC_FILES "ui/*.cpp" "src/*.cpp")

if(WIN32)
	add_executable(wxWidgets-template WIN32 ${SRC_FILES})
else()
	add_executable(wxWidgets-template ${SRC_FILES})
endif()

target_link_libraries(wxWidgets-template wx::net wx::core wx::base)
include_directories(ui)
