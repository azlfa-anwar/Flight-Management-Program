// airline.h

#include "flight.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#ifndef airline_class
#define airline_class

class Airline {
private:
  string name;
  vector<Flight> flights;

public:
  // Airline Setter Functions
  void set_name(string airline_name);
  void set_flights(const vector<Flight> &flight);

  // Airline Getter Functions
  string get_name() const;
  vector<Flight> get_flights() const;

  // Checks how many flights
  int number_flights() const;

  // Adds new flights
  void addFlight(const Flight &new_flight);
};

#endif