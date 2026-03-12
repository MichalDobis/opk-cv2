include(GoogleTest)
include(FetchContent)
FetchContent_Declare(
googletest
URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(fifo_test tests.cpp)
target_link_libraries(fifo_test PRIVATE GTest::gtest GTest::gtest_main fifo_lib)