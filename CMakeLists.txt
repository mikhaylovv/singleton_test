include_directories(lib)
add_subdirectory(lib)
add_executable(app app.cpp)
target_link_libraries(app __lib)