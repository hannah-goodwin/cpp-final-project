// Hannah Goodwin
// CIS 554-M401 Object Oriented Programming in C++
// Syracuse University
// Final Project
// 3/25/2021
// This program is the implementation of the BusinessPerson class

#include "BusinessPerson.hpp"
// inherits from PublicFigure
#include "PublicFigure.hpp"
#include <iostream>
#include <string>

using std::string;

// constructor
BusinessPerson::BusinessPerson () {
}

// setter functions
// set the company
void BusinessPerson::setCompany(string inputCompany) {
    company = inputCompany;
}
// set the title
void BusinessPerson::setTitle(string inputTitle) {
    title = inputTitle;
}

// getter functions
// get the company
string BusinessPerson::getCompany() const {
    return company;
}
// get the title
string BusinessPerson::getTitle() const {
    return title;
}
