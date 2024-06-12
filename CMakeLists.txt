option(BUILD_EXAMPLES "Build examples" OFF)
option(BUILD_TESTS "Build tests" OFF)


if(BUILD_TESTS)
  enable_testing()
  add_subdirectory(third-party/gtest)
  file(GLOB main.cpp tests/*.cpp)
  add_executable(check main.cpp)
  target_link_libraries(check gtest_main)
  add_test(NAME check COMMAND check)
endif()
