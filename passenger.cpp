// passenger.cpp

#include "passenger.h"

// Constructor implementation
Passenger::Passenger(int id, const string &firstName, const string &lastName,
                     const string &phoneNumber, const string &seat,
                     int seatNumber)
    : id(id), firstName(firstName), lastName(lastName),
      phoneNumber(phoneNumber), seat(seat), seatNumber(seatNumber) {}

// Getter implementation
int Passenger::getID() const { return id; }

string Passenger::getFirstName() const { return firstName; }

string Passenger::getLastName() const { return lastName; }

string Passenger::getPhoneNumber() const { return phoneNumber; }

string Passenger::getSeat() const { return seat; }

int Passenger::getSeatNumber() const { return seatNumber; }

// Setter implementations
void Passenger::setID(int id) { this->id = id; }

void Passenger::setFirstName(const string &firstName) {
  this->firstName = firstName;
}

void Passenger::setLastName(const string &lastName) {
  this->lastName = lastName;
}

void Passenger::setPhoneNumber(const string &phoneNumber) {
  this->phoneNumber = phoneNumber;
}

void Passenger::setSeat(const string &seat) { this->seat = seat; }

void Passenger::setSeatNumber(int seatNumber) { this->seatNumber = seatNumber; }
