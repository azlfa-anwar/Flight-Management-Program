// main.h

#include "flight.h"
#include <fstream>
#include <limits>
using namespace std;

#ifndef MAIN_H
#define MAIN_H

// Displays the header at the beginning
void displayHeader();

// Brings up the menu
int menu();

// Reads the enter key for the users
void pressEnter();

// Cleans the input the stream
void cleanStandardInputStream();

// Quits the program
void quit();

// Reads the text file
void populate_flight(Flight &f);

// Error-checking for a valid passenger ID
bool isValidPassengerID(const string &id);

// Error-checking to ensure no digits
bool hasDigits(const string &str);

// Error-checking for a valid phone number
bool isValidPhoneNumber(const string &phoneNumber);

// adds passengers - case 3
void add_passenger(Flight &f);

#endif
