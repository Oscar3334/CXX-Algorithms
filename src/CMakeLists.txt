add_library(algorithms STATIC algorithms.hpp)

target_include_directories(algorithms PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(algorithms PROPERTIES LINKER_LANGUAGE CXX)

# target_compile_features(algorithms PUBLIC cxx_std_20)
