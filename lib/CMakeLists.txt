file(
	GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(print SHARED ${SRC_FILES})

target_include_directories(print PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_compile_features(print PRIVATE cxx_std_17)
target_compile_definitions(print PRIVATE BUILD_PRAC)