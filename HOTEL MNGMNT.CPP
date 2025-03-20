// main.cpp

#include <iostream>
#include "HotelManagement.h"

int main() {
    HotelManagement hotel;
    hotel.showMenu();
    return 0;
}

#include "Hotel.h"
#include <iostream>

Hotel::Hotel() {
    rooms.push_back({101, true, 100.0});
    rooms.push_back({102, true, 120.0});
    rooms.push_back({103, true, 150.0});
    rooms.push_back({104, true, 180.0});
    rooms.push_back({105, true, 200.0});
}

