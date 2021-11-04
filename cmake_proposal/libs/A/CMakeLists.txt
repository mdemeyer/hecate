# minimum cmake version?
# project?
# version for each lib?

#build
add_library(A_lib
  include/a.hpp
  include/iaa.hpp

  src/a.cpp
  src/aa.cpp
  src/aa.hpp
  )

# setup includes
target_include_directories(A_lib PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>
  )

# Is the BUILD and INSTALL_INTERFACE differentiation needed for buildroot? This might be sufficient:
#target_include_directories(A_lib PUBLIC include)


# mocks
add_library(A_mocks
  mocks/mock_iaa.hpp
  mocks/mock_iaa.cpp
  )
target_include_directories(A_mocks PUBLIC mocks)
target_link_libraries(A_mocks PUBLIC A_lib)


# tests
add_executable(test_a
    #tests/test_a.cpp # duplicate main()
    tests/test_aa.cpp
    )
target_link_libraries(test_a PRIVATE A_mocks) # not needed to also link with A_lib, included from mocks
target_include_directories(test_a PRIVATE src)
add_test(test_a test_a)

# todo install
# export file needed?
