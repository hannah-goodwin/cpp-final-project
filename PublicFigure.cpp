// Hannah Goodwin
// CIS 554-M401 Object Oriented Programming in C++
// Syracuse University
// Final Project
// 3/25/2021
// This program is the implementation of the base class PublicFigure. The primary function that makes the game run is the like() function, implemented here

#include "PublicFigure.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
// PUBLIC
// constructor
PublicFigure::PublicFigure(){ 
}
// function that returns true/false for whether the interaction is pleasing to the person or not
bool PublicFigure::like(int theirNumber) const{
    int result; // holds the value that is the remainder after division
    // if the special number of the public figure divides evenly with the user's special number, the public figure will return true. In main(), this mean's the user gains 1 point
    if (theirNumber > specialNumber) {// if the user's number is larger than the public figure's
        result = theirNumber % specialNumber;
    } else if (specialNumber > theirNumber) { // other way around
        result = specialNumber % theirNumber;
    }
    else { // the two numbers are equal
        return true; // automatic like
    }
     // check for the value of the result
    if (result == 0) {
        return true; // divides evenly, they like them
    } else {
        return false; // doesn't divide evenly, doesn't like them
    }
}

// setter functions
// set the name
void PublicFigure::setName(string inputName) {
    name = inputName;
}
// set the net worth
void PublicFigure::setNetWorth(long double inputWorth) {
    netWorth = inputWorth;
}
// set the age
void PublicFigure::setAge(int inputAge) {
    age = inputAge;
}
// set the security level
void PublicFigure::setSecurityLevel(int inputSecurity) {
    securityLevel = inputSecurity;
}
// set the country
void PublicFigure::setCountry(string inputCountry) {
    country = inputCountry;
}
// set the quote
void PublicFigure::setQuote(string inputQuote) {
    quote = inputQuote;
}
// set the special number
void PublicFigure::setSpecialNumber(int inputNumber) {
    specialNumber = inputNumber;
}

// getter functions
// get the name
string PublicFigure::getName() const {
    return name;
}
// get the net worth
long double PublicFigure::getNetWorth() const { 
    return netWorth;
}
// get the age
int PublicFigure::getAge() const {
    return age;
}
// get the security level. made this return a string for readability in the game
string PublicFigure::getSecurityLevel() const {
    if (securityLevel == 0) { // lowest
        return "low";
    } else if (securityLevel == 1) { // medium
        return "medium";
    } else if (securityLevel == 2) { // highest
        return "high";
    }
    return "";
}
// get the country
string PublicFigure::getCountry() const {
    return country;
}
// get the quote
string PublicFigure::getQuote() const {
    return quote;
}
// get the special number--> need this for testing purposes
int PublicFigure::getSpecialNumber() const {
    return specialNumber;
}
