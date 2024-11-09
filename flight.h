// flight.h

#include "passenger.h"
#include "seat.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

#ifndef MY_FLIGHT
#define MY_FLIGHT

class Flight {
private:
  string idM;
  int num_rowsM;
  int num_columnsM;
  vector<Passenger> passengers;
  vector<vector<Seat>> seatmap;

public:
  // Constructors
  Flight();
  Flight(string id, int rows, int columns);

  // Flight getter functions
  string get_idM() const;
  int get_rowsM() const;
  int get_columnsM() const;
  vector<Passenger> get_passengers() const;
  vector<vector<Seat>> get_seatmap() const;

  // Flight setter functions
  void set_idM(string id);
  void set_numrowsM(int rows);
  void set_numcolumnsM(int columns);
  void set_passengers(const vector<Passenger> &passengers);

  // Function to add a passenger to the flight
  void add_passenger(const Passenger &passenger);

  // Function to display passenger information
  void display_passengers() const;

  // Function to save the info onto the text file
  void save_info();

  // Function to remove a passenger to the flight
  void remove_passenger(int passengerID);

  // Function to create an empty seat map
  void create_empty_seat_map();

  // Function to resize the seat map
  void resize_seat_map(int rows, int columns);

  // Function to display the seat map
  void display_seat_map() const;
};

#endif
