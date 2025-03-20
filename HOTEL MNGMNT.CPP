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
class Hotel {
private:
    vector<Room> rooms;
public:
    Hotel(int numRooms) {
        for (int i = 1; i <= numRooms; i++) {
            rooms.push_back(Room(i));
        }
    }
    void menu();
};

void Hotel::bookRoom() {
    int roomNumber;
    string name;
    cout << "Enter room number to book: ";
    cin >> roomNumber;
    cout << "Enter your name: ";
    cin >> name;

    if (roomNumber > 0 && roomNumber <= rooms.size()) {
        if (rooms[roomNumber - 1].isAvailable) {
            rooms[roomNumber - 1].isAvailable = false;
            rooms[roomNumber - 1].customerName = name;
            cout << "Room " << roomNumber << " has been booked for " << name << "." << endl;
        } else {
            cout << "Room is already booked." << endl;
        }
    } else {
        cout << "Invalid room number." << endl;
    }
}

void Hotel::menu() {
    int choice;
    do {
        cout << "1. Book Room" << endl;
        cout << "2. Check Out" << endl;
        cout << "3. Show Available Rooms" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            bookRoom();
            break;
        case 2:
            // code for check out
            break;
        case 3:
            // code to show available rooms
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 4);
}
void Hotel::showAvailableRooms() {
    cout << "Available Rooms: " << endl;
    for (auto& room : rooms) {
        if (room.isAvailable) {
            cout << "Room " << room.roomNumber << endl;
        }
    }
}
void Hotel::menu() {
    int choice;
    do {
        cout << "1. Book Room" << endl;
        cout << "2. Check Out" << endl;
        cout << "3. Show Available Rooms" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            bookRoom();
            break;
        case 2:
            // code for check out
            break;
        case 3:
            showAvailableRooms();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 4);
}

void Hotel::checkOut() {
    int roomNumber;
    cout << "Enter room number to check out: ";
    cin >> roomNumber;

    if (roomNumber > 0 && roomNumber <= rooms.size()) {
        if (!rooms[roomNumber - 1].isAvailable) {
            rooms[roomNumber - 1].isAvailable = true;
            cout << "Room " << roomNumber << " has been checked out successfully." << endl;
        } else {
            cout << "Room is already available." << endl;
        }
    } else {
        cout << "Invalid room number." << endl;
    }
}

void Hotel::menu() {
    int choice;
    do {
        cout << "1. Book Room" << endl;
        cout << "2. Check Out" << endl;
        cout << "3. Show Available Rooms" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            bookRoom();
            break;
        case 2:
            checkOut();
            break;
        case 3:
            showAvailableRooms();
            break;
        case 4:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    } while (choice != 4);
}

void Hotel::checkOut() {
    int roomNumber;
    cout << "Enter room number to check out: ";
    cin >> roomNumber;

    if (roomNumber < 1 || roomNumber > rooms.size()) {
        cout << "Invalid room number." << endl;
        return;
    }

    if (!rooms[roomNumber - 1].isAvailable) {
        rooms[roomNumber - 1].isAvailable = true;
        cout << "Room " << roomNumber << " has been checked out successfully." << endl;
    } else {
        cout << "Room is already available." << endl;
    }
}

Hotel::~Hotel() {
    cout << "Hotel system is shutting down." << endl;
}

Hotel::Hotel(int numRooms) {
    for (int i = 1; i <= numRooms; i++) {
        rooms.push_back(Room(i));
    }
    cout << "Hotel with " << numRooms << " rooms has been initialized." << endl;
}


















