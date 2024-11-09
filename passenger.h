// passenger.h

#include <string>
using namespace std;

#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
private:
  int id;
  string firstName;
  string lastName;
  string phoneNumber;
  string seat;
  int seatNumber;

public:
  // Constructor
  Passenger(int id, const string &firstName, const string &lastName,
            const string &phoneNumber, const string &seat, int seatNumber);

  // Passenger getter functions
  int getID() const;
  string getFirstName() const;
  string getLastName() const;
  string getPhoneNumber() const;
  string getSeat() const;
  int getSeatNumber() const;

  // Passenger setter functions
  void setID(const int id);
  void setFirstName(const string &firstName);
  void setLastName(const string &lastName);
  void setPhoneNumber(const string &phoneNumber);
  void setSeat(const string &seat);
  void setSeatNumber(int seatNumber);
};

#endif
