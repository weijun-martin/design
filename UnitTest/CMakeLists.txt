project( UnitTest )
cmake_minimum_required(VERSION 2.6.3)

enable_testing()


set(SOURCES 
	"UnitTest.cpp"
	"Template.cpp"
	"StateTest.cpp"
	"JsonTest.cpp"
) 

include_directories(../State/inc)

add_executable (UnitTest ${SOURCES})

target_link_libraries(UnitTest gtest_main gtest gmock_main gmock pthread state jsoncpp)