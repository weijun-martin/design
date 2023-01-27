set(PROJECT_NAME TestLog4cplus)
project( ${PROJECT_NAME} )
cmake_minimum_required(VERSION 3.14)


set(SOURCES 
	"main.cpp"
) 


add_executable (${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} log4cplus)