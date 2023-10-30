/*
Programming assignment #3
Name: Miles Fisher
Class: CS 250
Program Description: Creating a program in order to sort the list of states based on their
percentage of land used for solar panels.
*/
#include <iostream>
#include <string>
#include <list>
#include "state.h"
#include <iomanip>

using namespace std;

int main() {
    list<State> stateList; // Initialize the state list

    // List of states
    stateList.push_back(State("Texas", 13480.8, 7487580672000));
    stateList.push_back(State("California", 6922.8, 4563554688000));
    stateList.push_back(State("Louisiana", 4200.4, 1445216256000));
    stateList.push_back(State("Florida", 4003.1, 1805265792000));
    stateList.push_back(State("Illinois", 3612.9, 1614549657600));
    stateList.push_back(State("Pennsylvania", 3413.0, 1283967590400));
    stateList.push_back(State("Ohio", 3404.5, 1249649280000));
    stateList.push_back(State("New York", 3354.2, 1520933990400));
    stateList.push_back(State("Georgia", 2727.6, 1656673920000));
    stateList.push_back(State("Michigan", 2610.6, 2696287334400));

    // Sorting the list
    stateList.sort();

    // Display the ordered listing of states
    cout << "Ordered States: " << endl;

    int stateRank = 1; // Initialize a rank counter

    // Output
    for (const State& state : stateList) {
        cout << stateRank << ". " << state.getName() << " - " << state.getLandNeeded() << "%" <<  endl;
        stateRank++;
    }

    return 0;
}
