
add_executable(test_b test_b.cpp)

target_link_libraries(test_b PRIVATE B_lib)

# This feels like a failure, can we get rid of this?
target_include_directories(test_b PRIVATE ../src)

add_test(test_b test_b)
