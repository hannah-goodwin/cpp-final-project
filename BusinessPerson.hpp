// Hannah Goodwin
// CIS 554-M401 Object Oriented Programming in C++
// Syracuse University
// Final Project
// 3/25/2021
// This program is the interface of the BusinessPerson class. This class is derived from the PublicFigure class and includes 2 additional data members: company and title, and 4 more functions that set and get the private data members, as well as a constructor

#ifndef BusinessPerson_hpp
#define BusinessPerson_hpp

#include <iostream>
#include <string>
#include "PublicFigure.hpp" // need to include because this is the base class

using std::string;

class BusinessPerson : public PublicFigure { // inherits from PublicFigure class
private:
    string company; // "Apple", "IBM"
    string title; // "CEO", "Vice President of Sales", "CTO"
public:
    // constructor
    BusinessPerson();
    // setters
    void setCompany(string); // set the company
    void setTitle(string); // set the title
    // getters
    string getCompany() const; // returns the company
    string getTitle() const; // returns the title
};

#endif /* BusinessPerson_hpp */
