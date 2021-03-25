// Hannah Goodwin
// CIS 554-M401 Object Oriented Programming in C++
// Syracuse University
// Final Project
// 3/25/2021
// This program is the implementation of the Entertainer class

#include "Entertainer.hpp"
// inherits from PublicFigure
#include "PublicFigure.hpp"
#include <iostream>
#include <string>

using std::string;

// constructor
Entertainer::Entertainer () {
}

// setter functions
// set the number of awards won
void Entertainer::setAwards(int inputAwards) {
    awards = inputAwards;
}
// set the medium of the entertainer
void Entertainer::setMedium(string inputMedium) {
    medium = inputMedium;
}

// getter functions
// get the number of awards
int Entertainer::getAwards() const {
    return awards;
}
// get the medium
string Entertainer::getMedium() const {
    return medium;
}
