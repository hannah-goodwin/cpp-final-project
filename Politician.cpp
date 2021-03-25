// Hannah Goodwin
// CIS 554-M401 Object Oriented Programming in C++
// Syracuse University
// Final Project
// 3/25/2021
// This program is the implementation of the Politician class

#include "Politician.hpp"
// inherits from PublicFigure
#include "PublicFigure.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::string;

// constructor
Politician::Politician () {
}

// setter functions
// sets the party
void Politician::setParty(string inputParty) {
    party = inputParty;
}
// sets the state
void Politician::setState(string inputState) {
    state = inputState;
}

// getter functions
// returns the party
string Politician::getParty() const {
    return party; // GNARLY
}
// returns the state
string Politician::getState() const {
    return state;
}
