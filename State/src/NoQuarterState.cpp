#include "GumballMachine.h"

NoQuarterState::NoQuarterState(GumballMachine *machine)
{
    this->gumballMachine = machine;
    this->name = "NoQuarterState";
}

NoQuarterState::~NoQuarterState()
{
    this->gumballMachine = NULL;
}

void NoQuarterState::insertQuarter()
{
    return ;
}
void NoQuarterState::ejectQuarter()
{
    return ;
}
void NoQuarterState::turnCrank()
{
    return ;
}
void NoQuarterState::dipense()
{
    return ;
}

string NoQuarterState::getName()
{
    return name;
}