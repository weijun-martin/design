#include "GumballMachine.h"
#include <gtest/gtest.h>



// Demonstrate some basic assertions.
TEST(State, GumballMachine) {
	GumballMachine *machine = new GumballMachine(100);
    NoQuarterState *state1 = new NoQuarterState(machine);
    
    machine->setState(state1);
    State *state2 = machine->getState();
    string name = state2->getName();

    EXPECT_STREQ("NoQuarterState", name.data());
}