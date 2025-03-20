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
void checkIn() {
    cout << "Checking in..." << endl;
    // Add check-in logic here
}

void HotelManagement::displayMenu() {
    cout << "Welcome to the Hotel Management System!" << endl;
    cout << "1. Check-in" << endl;
    cout << "2. Check-out" << endl;
    cout << "3. View Room Status" << endl;
    cout << "4. Exit" << endl;
    
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: checkIn(); break;
        case 2: break;  // Placeholder for check-out
        case 3: break;  // Placeholder for view room status
        case 4: cout << "Exiting..." << endl; break;
    }
}
void Hotel::menu() {
    cout << "Welcome to the Hotel Management System" << endl;
    cout << "1. Book Room" << endl;
    cout << "2. Check Out" << endl;
    cout << "3. Show Available Rooms" << endl;
    cout << "4. Exit" << endl;
}

class Room {
public:
    int roomNumber;
    bool isAvailable;
    string customerName;

    Room(int number) : roomNumber(number), isAvailable(true), customerName("") {}
};





