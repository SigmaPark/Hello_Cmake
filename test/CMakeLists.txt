include(FetchContent)

FetchContent_Declare(
	Sigma
	GIT_REPOSITORY "https://greengb@dev.azure.com/greengb/sigma/_git/sigma"
)

FetchContent_MakeAvailable(Sigma)

set(SIGMA_SRC_DIR ${CMAKE_BINARY_DIR}/_deps/sigma-src/include)

file(
	GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(
	print_test
	${SRC_FILES}
)


target_include_directories(
	print_test PRIVATE 
	${SIGMA_SRC_DIR}
)


target_compile_definitions(
	print_test PRIVATE
	SGM_CXX_STANDARD=2017
)