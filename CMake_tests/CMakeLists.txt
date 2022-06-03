cmake_minimum_required( VERSION 3.1 )

project( Exec_test "CXX" )

file( GLOB sources "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/hw/*.cpp"  )

add_executable( ${PROJECT_NAME} ${sources} )

target_include_directories( ${PROJECT_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/inc" "${CMAKE_CURRENT_SOURCE_DIR}/hw")
