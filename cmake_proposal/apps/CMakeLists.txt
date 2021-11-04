add_executable(theia_killer theia_killer.cpp)

target_link_libraries(theia_killer PRIVATE A_lib B_lib)

# alternative add as subdirectory?
#add_subdirectory(theia_killer)
