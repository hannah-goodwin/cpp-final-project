// Hannah Goodwin
// CIS 554-M401 Object Oriented Programming in C++
// Syracuse University
// Final Project
// 3/25/2021
// This program is the interface of the Politician class. This class is derived from the PublicFigure class and includes 2 additional data members: party and state, and 4 more functions that set and get the private data members, as well as a constructor

#ifndef Politician_hpp
#define Politician_hpp

#include <iostream>
#include <string>
#include "PublicFigure.hpp" // need to include because this is the base class

using std::string;

class Politician : public PublicFigure { // inherits from PublicFigure class
private:
    string party; // "GOP", "Green", "Democrat"
    string state; // "California", "Iowa"
public:
    // constructor
    Politician();
    // setters
    void setParty(string); // set the party
    void setState(string); // set the state
    // getters
    string getParty() const; // returns the party
    string getState() const; // returns the state
};

#endif /* Politician_hpp */
