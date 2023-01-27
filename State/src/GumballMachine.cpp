#include "GumballMachine.h"

GumballMachine::GumballMachine(int numberGumballs)
{
    noQuarterState = new NoQuarterState(this);
}

GumballMachine::~GumballMachine()
{
    delete soldOutState;
    delete noQuarterState;
    delete hasQuarterState;
    delete soldState;
    currentState = NULL;
}


void GumballMachine::insertQuarter()
{
    currentState->insertQuarter();
}

void GumballMachine::ejectQuarter()
{
    currentState->ejectQuarter();
}

void GumballMachine::turnCrank()
{
    currentState->turnCrank();
}

void GumballMachine::dipense()
{
    currentState->dipense();
}

void GumballMachine::setState(State* state)
{
    currentState = noQuarterState;
}

State* GumballMachine::getState()
{
    return currentState;
}