// Module: Room Service & Restaurant Billing - Qaswa Armghan
#ifndef ROOM_SERVICE_BILLING_H
#define ROOM_SERVICE_BILLING_H

#include <iostream>
#include <iomanip>
#include <string>

class GuestFolio {
private:
    std::string guestName;
    int roomNumber;
    double totalCharges;

public:
    GuestFolio() : guestName("Unknown Guest"), roomNumber(0), totalCharges(0.0) {}
    GuestFolio(const std::string& name, int room, double total)
        : guestName(name), roomNumber(room), totalCharges(total) {}
    ~GuestFolio() {}

    void addCharge(double amount) {
        totalCharges += amount;
    }

    void display() const {
        std::cout << "Guest: " << guestName << " | Room: " << roomNumber
                  << " | Total bill: Rs. " << std::fixed << std::setprecision(2)
                  << totalCharges << '\n';
    }
};

class FoodOrder {
private:
    std::string foodName;
    int roomNumber;
    double amount;

public:
    FoodOrder() : foodName("No food order"), roomNumber(0), amount(0.0) {}
    FoodOrder(const std::string& food, int room, double price)
        : foodName(food), roomNumber(room), amount(price) {}
    ~FoodOrder() {}

    void postCharge(GuestFolio& folio) const {
        folio.addCharge(amount);
    }

    void display() const {
        std::cout << "Food order: " << foodName << " | Room: " << roomNumber
                  << " | Charge: Rs. " << std::fixed << std::setprecision(2) << amount << '\n';
    }
};

class LaundryOrder {
private:
    std::string serviceName;
    int roomNumber;
    double amount;

public:
    LaundryOrder() : serviceName("No laundry order"), roomNumber(0), amount(0.0) {}
    LaundryOrder(const std::string& service, int room, double price)
        : serviceName(service), roomNumber(room), amount(price) {}
    ~LaundryOrder() {}

    void postCharge(GuestFolio& folio) const {
        folio.addCharge(amount);
    }

    void display() const {
        std::cout << "Laundry order: " << serviceName << " | Room: " << roomNumber
                  << " | Charge: Rs. " << std::fixed << std::setprecision(2) << amount << '\n';
    }
};

#endif
