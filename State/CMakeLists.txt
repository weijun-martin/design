project(State)


set(SOURCES 
	"src/State.cpp"
	"src/NoQuarterState.cpp"
    "src/GumballMachine.cpp"
) 
include_directories("./inc")
add_library(state SHARED ${SOURCES})