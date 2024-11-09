// seap.cpp

#include "seat.h"

// Constructor implementation
Seat::Seat(int row, char column, bool status)
    : rowM(row), columnM(column), statusM(status) {}

// Getter implementation
int Seat::get_row() const { return rowM; }

char Seat::get_column() const { return columnM; }

bool Seat::get_status() const { return statusM; }

// Setter implementation
void Seat::set_row(int row) { rowM = row; }

void Seat::set_column(char column) { columnM = column; }

void Seat::set_status(bool status) { statusM = status; }
