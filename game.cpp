// Hannah Goodwin
// CIS 554-M401 Object Oriented Programming in C++
// Syracuse University
// Final Project
// 3/25/2021
// This program is a game that includes polymorphism. The base class is a PublicFigure, which has base information that all the classes require such as a name, age, net worth, etc. The player of the game creates their own object (all of this information is kept in main()) and interacts with the previously created public figures, hoping to win their approval. The user wins if a majority of the public figures grants them a point of approval. This program does not loop, but the user can play as much as they want to try to figure out the key to winning the game

#include <iostream> // needed for input/output
#include <vector> // needed to hold vector of base class object pointers
#include <string> // needed to get string length
// all the related classes
#include "PublicFigure.hpp" // inheritance level 1
#include "Politician.hpp" // inheritance level 2
#include "Entertainer.hpp" // inheritance level 2
#include "BusinessPerson.hpp" // inheritance level 2

// including all of the keywords used in the main()
using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::getline;

int main (){
    // BANNER EXPLANATION OF GAME
    cout << "Welcome to The Table! You will be seated next to our famous guests as your own customized public figure! Keep your popularity rating high enough and you'll win the game!\n";
    
    // CREATE ALL OF THE OBJECTS & SET ALL VALUES
    // comedian: James Acaster
    Entertainer james = Entertainer();
    james.setName("James Acaster");
    james.setNetWorth(2000000.00); // $2M
    james.setAge(36);
    james.setSecurityLevel(0);
    james.setCountry("England");
    james.setQuote("Corduroy hits the sweet spot between jeans and slacks. They're a trouser middleman.");
    // his secret special number will be 3
    james.setSpecialNumber(3);
    // something special about entertainers
    james.setAwards(5);
    /* "He won the Melbourne International Comedy Festival Award for Most Outstanding Show in 2019 with Cold Lasagne Hate Myself 1999, and has won four Chortle awards." */
    james.setMedium("stand-up comedy");
    
    // singer: Billie Eilish
    Entertainer billie = Entertainer();
    billie.setName("Billie Eilish");
    billie.setNetWorth(25000000.00); // $25M
    billie.setAge(19);
    billie.setSecurityLevel(2);
    billie.setCountry("United States of America");
    billie.setQuote("I’ve always done whatever I want and always been exactly who I am.");
    // her secret special number will be 8
    billie.setSpecialNumber(8);
    // something special about entertainers
    billie.setAwards(18);
    /* "Billie Eilish has been the recipient of numerous awards including seven Grammy Awards, two American Music Awards, two MTV Europe Music Awards, one BRIT Award, three MTV Video Music Awards and a NRJ Music Award. She has also earned two Guinness World Records during her career." */
    billie.setMedium("singer/songwriter");
    
    // actor: Paul Rudd
    Entertainer paul = Entertainer();
    paul.setName("Paul Rudd");
    paul.setNetWorth(70000000.00); // $70M
    paul.setAge(51);
    paul.setSecurityLevel(1);
    paul.setCountry("United States of America");
    paul.setQuote("Man they won't change that stupid flyer, Chuck's my mainland name, my Hawaiian name's Kunu.");
    // his secret special number will be 5
    paul.setSpecialNumber(5);
    // something special about entertainers
    paul.setAwards(4);
    paul.setMedium("actor");
    
    
    // Ginni Rommety, former CEO of IBM
    BusinessPerson ginni = BusinessPerson();
    ginni.setName("Ginni Rommety");
    ginni.setNetWorth(30000000.00); // $30M
    ginni.setAge(63);
    ginni.setSecurityLevel(0);
    ginni.setCountry("United States of America");
    ginni.setQuote("The most important thing for any of us to be in our jobs is curious.");
    // her secret special number will be 1
    ginni.setSpecialNumber(1);
    // something special about business people
    ginni.setCompany("IBM"); // affiliation ended in 2020
    ginni.setTitle("CEO");
    
    // Elon Musk, CEO of Tesla
    BusinessPerson elon = BusinessPerson();
    elon.setName("Elon Musk");
    elon.setNetWorth(162400000000.00); // $162.4B as of 3/21/2021
    elon.setAge(63);
    elon.setSecurityLevel(2);
    elon.setCountry("United States of America");
    elon.setQuote("It's OK to have your eggs in one basket as long as you control what happens to that basket.");
    // his secret special number will be 17
    elon.setSpecialNumber(17);
    // something special about business people
    elon.setCompany("Tesla");
    elon.setTitle("Founder and CEO");
    
    // Senator Elizabeth Warren of MA
    Politician elizabeth = Politician();
    elizabeth.setName("Elizabeth Warren");
    elizabeth.setNetWorth(12000000); // $12M
    elizabeth.setAge(71);
    elizabeth.setSecurityLevel(1);
    elizabeth.setCountry("United States of America");
    elizabeth.setQuote("Credit cards are like snakes: Handle 'em long enough, and one will bite you.");
    // her secret special number will be 11
    elizabeth.setSpecialNumber(11);
    // something special about politicians
    elizabeth.setParty("Democrat");
    elizabeth.setState("Massachusetts");
    
    // House Member Alexandria Ocasio-Cortez
    Politician aoc = Politician();
    aoc.setName("Alexandria Ocasio-Cortez");
    aoc.setNetWorth(100000); // $100,000
    aoc.setAge(31);
    aoc.setSecurityLevel(1);
    aoc.setCountry("United States of America");
    aoc.setQuote("I am here because I have to show my parents that I am their daughter — and that they did not raise me to accept abuse from men.");
    // her secret special number will be 7
    aoc.setSpecialNumber(7);
    // something special about politicians
    aoc.setParty("Democrat");
    aoc.setState("New York");
    
    // base class pointers point at the derived class objects
    const PublicFigure* jamesPtr{&james}; // point at James
    const PublicFigure* billiePtr{&billie}; // point at Billie
    const PublicFigure* paulPtr{&paul}; // point at Paul
    const PublicFigure* ginniPtr{&ginni}; // point at Ginni
    const PublicFigure* elonPtr{&elon}; // point at Elon
    const PublicFigure* elizabethPtr{&elizabeth}; // point at Elizabeth
    const PublicFigure* aocPtr{&aoc}; // point at AOC
    
    // create the vector of pointers to objects and place all of the PublicFigure pointers into the vector
    vector<const PublicFigure*> pubFigs{jamesPtr, billiePtr, paulPtr, ginniPtr, elonPtr, elizabethPtr, aocPtr};
        // adding all the pointers in the initialization. Originally, I had initialized the vector to have 7 things, and when adding the pointers, it held 14 items. Doing it this way assures I just have my 7 intended pointers in the vector
    
    // show the user the objects that already exist
    cout << "Here's who you'll be talking to at the table:\n";
    for (int i = 0; i < 7; i++) { // looping 7 times to reach each PublicFigure object
        // getting the name of the public figure
        string nameToPrint = (pubFigs.at(i))->getName();
        // printing the name of the public figure
        cout << nameToPrint << ":\n";
        // getting the quote from the public figure
        string quoteToPrint = (pubFigs.at(i))->getQuote();
        // printing the quote from the public figure
        cout << "\t\"" << quoteToPrint << "\"\n";
    }
    
    // User creates their own object
    cout << "Now it is your turn to join the table. Create a public figure to play. Do you want to be an entertainer [0], a business person [1], or a politician [2]? ";
    int userObjectChoice; // variable to hold user choices
    cin >> userObjectChoice;
    // input handling
    while (cin.fail()) { // while the fail flag is up, happens upon bad input
        cin.clear(); // clear the buffer
        cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
        cout << "enter an integer i.e. \"0\" or \"1\" please: ";
        cin >> userObjectChoice;
    }
    cin.sync(); // clearing the input buffer
    // validate user input for range of options
    while (userObjectChoice < 0 || userObjectChoice > 2) {
        cout << "Please enter a 0, 1, or 2: ";
        cin >> userObjectChoice;
    }
    cout << "\n";
    cin.sync(); // clearing the input buffer
    cin.ignore();
    
    // ask for name
    cout << "What's your public figure's name? ";
    string userName; // holds the name
    getline(cin, userName); // will grab the entire line up to newline character
    // input handling
    while (cin.fail()) { // while the fail flag is up, happens upon bad input
        cin.clear(); // clear the buffer
        cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
        cout << "enter a valid name please: ";
        cin >> userName;
    }
    cin.sync(); // synching up the input buffer
    
    // user gets a number based on their name and that number gets sent into the like() function
    int userSpecialNumber = (int)userName.size(); // casting the return type of size() to an integer to get rid of precision loss warning
    cout << "\n";
    
    // ask for net worth
    cout << "What's your public figure's net worth? ";
    double userNetWorth; // holds the net worth
    cin >> userNetWorth;
    // input handling
    while (cin.fail()) { // while the fail flag is up, happens upon bad input
        cin.clear(); // clear the buffer
        cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
        cout << "!!!\tenter a double i.e. \"90000.0\" or \"90000\" please: ";
        cin >> userNetWorth;
    }
    cout << "\n";
    cin.sync(); // clearing the input buffer
    
    // ask for age
    cout << "What's your public figure's age? ";
    int userAge; // holds the age
    cin >> userAge;
    // input handling
    while (cin.fail()) { // while the fail flag is up, happens upon bad input
        cin.clear(); // clear the buffer of flags
        cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
        cout << "enter an integer i.e. \"19\" or \"90\" please: ";
        cin >> userAge;
    }
    cin.sync(); // clearing the input buffer
    // input validation based on range
    while (userAge < 18) {
        cout << "!!!\tYou must be over 18 to be a public figure in this game. Try again: ";
        cin >> userAge;
    }
    cout << "\n";
    cin.sync(); // clearing the input buffer
    
    // ask for security level
    cout << "What level of security does your public figure require? Little to none [0], a medium amount [1], or a constant security team [2]? ";
    int userSecurityLevel; // variable to hold user choices
    cin >> userSecurityLevel;
    // input handling
    while (cin.fail()) { // while the fail flag is up, happens upon bad input
        cin.clear(); // clear the buffer
        cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
        cout << "!!!\tenter an integer i.e. \"0\" or \"1\" please: ";
        cin >> userObjectChoice;
    }
    cin.sync(); // clearing the input buffer
    // validate user input for range of options
    while (userSecurityLevel < 0 || userSecurityLevel > 2) {
        cout << "Please enter a 0, 1, or 2\n";
        cin >> userSecurityLevel;
    }
    cout << "\n";
    cin.sync(); // clearing the input buffer
    cin.ignore();
    
    // ask for country
    cout << "What's your public figure's country? ";
    string userCountry; // holds the country
    cin >> userCountry;
    cin.sync();
    // input handling
    while (cin.fail()) { // while the fail flag is up, happens upon bad input
        cin.clear(); // clear the buffer flags
        cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
        cout << "!!!\tenter a valid country please: ";
        cin >> userCountry;
    }
    cout << "\n";
    cin.sync(); // clearing the input buffer
    cin.ignore();
    
    // ask for quote
    cout << "What's something your public figure would say? ";
    string userQuote; // holds the quote
    getline(cin, userQuote);
    cin.sync();
    // input handling
    while (cin.fail()) { // while the fail flag is up, happens upon bad input
        cin.clear(); // clear the buffer
        cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
        cout << "!!!\tenter a valid quote please: ";
        cin >> userQuote;
    }
    cout << "\n";
    cin.sync(); // clearing the input buffer
    
    // conditions to add the other needed information particular to the type of public figure the user wants to create
    // declaration of the variables necessary
    // entertainer-related variables
    int userAwards{0};
    string userMedium;
    // business person-related variables
    string userCompany;
    string userTitle;
    // politician-related variables
    string userParty;
    string userState;

    if (userObjectChoice == 0) { // entertainer
        // ask for awards
        cout << "How many awards has your entertainer won? ";
        cin >> userAwards;
        // input handling
        while (cin.fail()) { // while the fail flag is up, happens upon bad input
            cin.clear(); // clear the buffer
            cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
            cout << "!!!\tenter an integer i.e. \"0\" or \"1\" please: ";
            cin >> userAwards;
        }
        cin.sync(); // clearing the input buffer
        cin.ignore();
        cout << "\n";
        
        // ask for medium
        cout << "What does your entertainer do? (actor, singer, musician): ";
        getline(cin, userMedium);
        // input handling
        while (cin.fail()) { // while the fail flag is up, happens upon bad input
            cin.clear(); // clear the buffer
            cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
            cout << "!!!\tenter a valid answer please: ";
            cin >> userMedium;
        }
        cout << "\n";
        cin.sync(); // clearing the input buffer
    } else if (userObjectChoice == 1) { // business person
        // ask for company
        cout << "What company is your business person affiliated with? ";
        getline(cin, userCompany);
        // input handling
        while (cin.fail()) { // while the fail flag is up, happens upon bad input
            cin.clear(); // clear the buffer
            cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
            cout << "!!!\tenter a valid company name please: ";
            cin >> userCompany;
        }
        cout << "\n";
        cin.sync(); // clearing the input buffer
        
        // ask for title
        cout << "What is your business person's title? (CEO, Vice President, Founder): ";
        getline(cin, userTitle);
        // input handling
        while (cin.fail()) { // while the fail flag is up, happens upon bad input
            cin.clear(); // clear the buffer
            cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
            cout << "!!!\tenter a valid title please: ";
            cin >> userTitle;
        }
        cout << "\n";
        cin.sync(); // clearing the input buffer
    } else if (userObjectChoice == 2) { // politician
        // ask for party
        cout << "What is your politician's party? (one word i.e. Green or GOP) ";
        cin >> userParty;
        // input handling
        while (cin.fail()) { // while the fail flag is up, happens upon bad input
            cin.clear(); // clear the buffer
            cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
            cout << "!!!\tenter a valid party please: ";
            cin >> userParty;
        }
        cout << "\n";
        cin.sync(); // clearing the input buffer
        
        // ask for state
        cout << "What is your politician's state? (one word i.e. CA or New York) ";
        cin >> userState;
        // input handling
        while (cin.fail()) { // while the fail flag is up, happens upon bad input
            cin.clear(); // clear the buffer
            cin.ignore(100, '\n'); // ignore the first 100 characters, up to the newline character
            cout << "!!!\tenter a valid state please: ";
            cin >> userState;
        }
        cout << "\n";
        cin.sync(); // clearing the input buffer
    }
    
    // output the user's information
    cout << "Review of your character:\n";
    cout << "Your name: " << userName << "\n";
    cout << "Net worth: " << userNetWorth << "\n";
    cout << "Age: " << userAge << "\n";
    cout << "Your security level is " << userSecurityLevel << "\n";
    cout << "Your country: " << userCountry << "\n";
    cout << "Something you would say: \"" << userQuote << "\"\n";
    // need to do condition for which kind of public figure they created
    if (userObjectChoice == 0) { // entertainer
        cout << "Number of awards: " << userAwards << "\n";
        cout << "What you do: " << userMedium << "\n";
    } else if (userObjectChoice == 1) { // business person
        cout << "Your company is " << userCompany << " and your title is " << userTitle << "\n";
    } else if (userObjectChoice == 2) { // politician
        cout << "You are part of the " << userParty << " party and you are from the great state of " << userState << "\n";
    }
    
    // PLAY THE GAME
    // output to the user to explain the user
    cout << "\n\nYour mission: Get a majority of the people at the table to like you.\nThroughout your time, you will interact with each of them once (first impressions are everything!!)\n\tYou start with 7 points.\n\tIf they like you, you gain a point. If they don't, you lose a point.\nGood luck!\n";
    cout << "Enter any key to begin: ";
    string userContinue;
    getline(cin, userContinue); // don't need to have input handling here
    cin.sync(); // clearing the input buffer
    
    // the user's beginning points: 7
    double userRank = 7;
    // player can gain or lose 1 point with each interaction
    // interact with each person at the table once
    // if a majority of the people at the table like them...
    // 4 likes, 3 dislikes ==> 1 point gained overall
    // 5 likes, 2 dislikes ==> 2 points gained overall
    // 6 likes, 1 dislike  ==> 3 points gained overall
    // 7 likes, 0 dislikes ==> 4 points gained overall
    
    for (int current = 0; current < 7; current++) { // looping 7 times to reach each PublicFigure object
        // pubFigs is the vector of base class pointers pointing at the derived class objects
        // getting the name of the public figure
        string nameToPrint = (pubFigs.at(current))->getName();
        
        // interaction with the public figure
        cout << nameToPrint << " greets you. ";
        cout << "Here's some information about them to help aid you in your interaction. You have one chance to gain their approval.\n";
        cout << "\tCountry of origin: " << pubFigs.at(current)->getCountry() << "\n";
        cout << "\tAge: " << pubFigs.at(current)->getAge() << "\n";
        cout << "\tNet worth: " << pubFigs.at(current)->getNetWorth() << "\n";
        cout << "\tSecurity level: " << pubFigs.at(current)->getSecurityLevel() << "\n";
        cout << "What do you want to say? ";
        string userInteract;
        getline(cin, userInteract); // this shouldn't require any input handling
        cin.sync(); // clearing the input buffer
        
        // see if the public figure likes the user
        cout << "Let's wait to see if they like you . . . \n";
        // the like() returns a boolean value
        // testing statements:
//        cout << "public figure special number: " << pubFigs.at(current)->getSpecialNumber() << "\n";
//        cout << "user special number: " << userSpecialNumber << "\n";
        bool likesYou = pubFigs.at(current)->like(userSpecialNumber);

        // condition for printing out whether the user is liked or not by the public figure
        if (likesYou == true) {
            cout << "\t\t" << nameToPrint << " likes you!\n";
            userRank++;
        } else {
            cout << "\t\t" << nameToPrint << " doesn't like you :(\n";
            userRank--;
        }
    }
    
    // END OF THE GAME
    cout << "\nEND OF GAME\n\n" << userName << "'s rank: " << userRank << "\n";
    
    if (userRank > 7) { // they win!
        cout << "YOU WIN!\n";
    } else { // the user has lost
        cout << "You lost!\n";
    }
    
    // end of game output
    cout << "\n\nThanks for playing!\n\n";
    
} // end of program
