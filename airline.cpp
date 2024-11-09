// airline.cpp
#include "airline.h"

// Setters implementation
void Airline::set_name(string airline_name) { name = airline_name; }

void Airline::set_flights(const vector<Flight> &flight) {
  this->flights = flight;
}

// Getters implementation

string Airline::get_name() const { return name; }

vector<Flight> Airline::get_flights() const { return flights; }

// Number of flights implementation
int Airline::number_flights() const { return flights.size(); }

// Add flight implementation
void Airline::addFlight(const Flight &new_flight) {
  flights.push_back(new_flight);
}