find_package(fmt CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)



set(SRC_TEST sample_test.cpp)

# add the executable
add_executable(main_test ${SRC_TEST})

target_link_libraries(main_test PRIVATE fmt::fmt-header-only GTest::gtest GTest::gtest_main)
