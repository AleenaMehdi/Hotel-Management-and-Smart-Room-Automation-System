#ifndef FRONT_DESK_H
#define FRONT_DESK_H

#include <iostream>
#include <iomanip>
#include <string>

class GuestCheckIn {
private:
    std::string guestName;
    std::string idNumber;
    double securityDeposit;

public:
    GuestCheckIn()
        : guestName("Walk-in Guest"), idNumber("ID-0000000000"), securityDeposit(100.0) {}

    GuestCheckIn(const std::string& name, const std::string& id, double deposit)
        : guestName(name), idNumber(id), securityDeposit(deposit) {}

    ~GuestCheckIn() {}

    void display() const {
        std::cout << "Guest: " << guestName
                  << " | ID: " << idNumber
                  << " | Security Deposit: $" << std::fixed << std::setprecision(2)
                  << securityDeposit << std::endl;
    }
};

class KeycardHandover {
private:
    int roomNumber;
    std::string keycardId;
    bool active;

public:
    KeycardHandover()
        : roomNumber(101), keycardId("KC-000"), active(true) {}

    KeycardHandover(int room, const std::string& cardId, bool isActive)
        : roomNumber(room), keycardId(cardId), active(isActive) {}

    ~KeycardHandover() {}

    void display() const {
        std::cout << "Room: " << roomNumber
                  << " | Keycard ID: " << keycardId
                  << " | Status: " << (active ? "Active" : "Deactivated") << std::endl;
    }
};

#endif
