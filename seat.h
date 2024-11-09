// seat.h

#include "passenger.h"
#include <iostream>
using namespace std;

#ifndef MY_SEAT
#define MY_SEAT

class Seat {
private:
  int rowM;
  char columnM;
  bool statusM;

public:
  // Constructors
  Seat() : rowM(1), columnM('A'), statusM(false){};
  Seat(int row, char column, bool status);

  // seat getter functions
  int get_row() const;
  char get_column() const;
  bool get_status() const;

  // seat setter functions
  void set_row(int row);
  void set_column(char column);
  void set_status(bool status);
};

#endif