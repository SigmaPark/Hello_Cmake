file(
	GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(print STATIC ${SRC_FILES})

target_include_directories(print PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_compile_features(print PRIVATE cxx_std_17)