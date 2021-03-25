// Hannah Goodwin
// CIS 554-M401 Object Oriented Programming in C++
// Syracuse University
// Final Project
// 3/25/2021
// This program is the interface of the PublicFigure class

#ifndef PublicFigure_hpp
#define PublicFigure_hpp
#include <iostream>
#include <string>

using std::string;

class PublicFigure {
private:
    string name; // name of the person
    long double netWorth; // net worth of the person
    int age; // age
    int securityLevel; // three levels of security accepted
    string country; // country of origin
    string quote; // something they would say
    int specialNumber; // this variable will be a determiner in the like() function
    
public:
    // constructor
    PublicFigure();
    virtual bool like(int) const; // function that returns true/false if the person likes/dislikes the interaction
    // setter functions for the private data members
    virtual void setName(string);
    virtual void setNetWorth(long double); // sending a long double because some of these numbers are really large
    virtual void setAge(int);
    virtual void setSecurityLevel(int); // 0 being low, 1 being medium, 2 being high
    virtual void setCountry(string);
    virtual void setQuote(string);
    virtual void setSpecialNumber(int);
    // getter functions for the private data members
    // all of the getter functions are const so that the compiler warns if the private data member is altered in any way when these functions are called
    virtual string getName() const;
    virtual long double getNetWorth() const;
    virtual int getAge() const;
    virtual string getSecurityLevel() const;
    virtual string getCountry() const;
    virtual string getQuote() const;
    virtual int getSpecialNumber() const;
};

#endif /* PublicFigure_hpp */
