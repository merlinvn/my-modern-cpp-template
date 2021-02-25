find_package(fmt CONFIG REQUIRED)
find_package(GTest CONFIG REQUIRED)

include(GoogleTest)
# set(SRC_TEST sample_test.cpp)
#
# # add the executable
# add_executable(main_test ${SRC_TEST})
#
# target_link_libraries(main_test PRIVATE fmt::fmt-header-only GTest::gtest GTest::gtest_main)
#

add_custom_target(build_and_test ${CMAKE_CTEST_COMMAND} -V)

macro(package_add_test TESTNAME)
    # create an exectuable in which the tests will be stored
    add_executable(${TESTNAME} ${ARGN})
    # link the Google test infrastructure, mocking library, and a default main fuction to
    # the test executable.  Remove g_test_main if writing your own main function.
    target_link_libraries(${TESTNAME} GTest::gtest GTest::gmock GTest::gtest_main)
    # gtest_discover_tests replaces gtest_add_tests,
    # see https://cmake.org/cmake/help/v3.10/module/GoogleTest.html for more options to pass to it
    gtest_discover_tests(${TESTNAME}
        # set a working directory to your project root so that you can find test data via paths relative to the project root
        WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
        PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}"
    )
    add_dependencies(build_and_test ${TESTNAME})
    set_target_properties(${TESTNAME} PROPERTIES FOLDER tests)
endmacro()

package_add_test(sample_test1 sample/sample_test1.cpp sample/sample_test2.cpp)
package_add_test(sample_test2 sample/sample_test2.cpp)


# other options if we need to test library
# macro(package_add_test_with_libraries TESTNAME FILES LIBRARIES TEST_WORKING_DIRECTORY)
#     add_executable(${TESTNAME} ${FILES})
#     target_link_libraries(${TESTNAME} GTest::gtest GTest::gmock Gtest::gtest_main ${LIBRARIES})
#     gtest_discover_tests(${TESTNAME}
#         WORKING_DIRECTORY ${TEST_WORKING_DIRECTORY}
#         PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "${TEST_WORKING_DIRECTORY}"
#     )
#     set_target_properties(${TESTNAME} PROPERTIES FOLDER tests)
# endmacro()
#
# package_add_test_with_libraries(test1 test1.cpp lib_to_test "${PROJECT_DIR}/european-test-data/")
#
