
add_library(B_lib
  include/IB.hpp
  src/B.cpp
  src/B.hpp
  )

target_include_directories(B_lib PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  )

add_subdirectory(tests)
