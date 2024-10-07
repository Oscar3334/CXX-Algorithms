include(FetchContent)

FetchContent_Declare(
    boost_ut
    GIT_REPOSITORY "https://github.com/boost-ext/ut.git"
    GIT_TAG        "v2.1.0"
)
FetchContent_MakeAvailable(boost_ut)

add_executable(test_all_of test_all_of.cpp)
add_executable(test_any_of test_any_of.cpp)
add_executable(test_none_of test_none_of.cpp)
add_executable(test_for_each test_for_each.cpp)
add_executable(test_for_each_n test_for_each_n.cpp)
add_executable(test_search test_search.cpp)

target_link_libraries(test_all_of PRIVATE algorithms Boost::ut)
target_link_libraries(test_any_of PRIVATE algorithms Boost::ut)
target_link_libraries(test_none_of PRIVATE algorithms Boost::ut)
target_link_libraries(test_for_each PRIVATE algorithms Boost::ut)
target_link_libraries(test_for_each_n PRIVATE algorithms Boost::ut)
target_link_libraries(test_search PRIVATE algorithms Boost::ut)

add_test(NAME all_of COMMAND test_all_of)
add_test(NAME any_of COMMAND test_any_of)
add_test(NAME none_of COMMAND test_none_of)
add_test(NAME for_each COMMAND test_for_each)
add_test(NAME for_each_n COMMAND test_for_each_n)
add_test(NAME search COMMAND test_search)
