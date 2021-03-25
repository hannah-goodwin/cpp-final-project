// Hannah Goodwin
// CIS 554-M401 Object Oriented Programming in C++
// Syracuse University
// Final Project
// 3/25/2021
// This program is the interface of the Entertainer class. This class is derived from the PublicFigure class and includes 2 additional data members: awards and medium, and 4 more functions that set and get the private data members, as well as a constructor

#ifndef Entertainer_hpp
#define Entertainer_hpp

#include <iostream>
#include <string>
#include "PublicFigure.hpp" // need to include because this is the base class
using std::string;

class Entertainer : public PublicFigure { // inherits from PublicFigure class
private:
    int awards; // number of awards the entertainer has won
    string medium; // comedy, singing, dancing, etc.
public:
    Entertainer();
    // setters
    void setAwards(int); // sets the number of awards the entertainer has won
    void setMedium(string); // sets the medium of the entertainer
    // getters
    int getAwards() const; // returns the number of awards
    string getMedium() const; // returns the medium of the entertainer
    
};

#endif /* Entertainer_hpp */
