#ifndef __GUMBALLMACHINE_H__
#define __GUMBALLMACHINE_H__

#include <stdio.h>
#include <stddef.h>
#include <string>
using namespace std;
class State
{
public:
    State();
    ~State();
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dipense() = 0;
    virtual string getName() = 0;
};

class GumballMachine
{
private:
    State *soldOutState;
    State *noQuarterState;
    State *hasQuarterState;
    State *soldState;
    State *currentState;
    int count;
public:
    GumballMachine(int numberGumballs);
    ~GumballMachine();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dipense();
    void setState(State* state);
    State *getState();
};

class NoQuarterState : public State
{
private:
    GumballMachine *gumballMachine;
    string name;
public:
    NoQuarterState(GumballMachine *machine);
    ~NoQuarterState();
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dipense();
    string getName();
};




#endif