#include "RoomServiceBilling.h"
#include <iostream>
#include <iomanip>

GuestFolio::GuestFolio() : guestName("Unknown Guest"), roomNumber(0), totalCharges(0.0) {}

GuestFolio::GuestFolio(const std::string& name, int room, double total)
    : guestName(name), roomNumber(room), totalCharges(total) {}

GuestFolio::~GuestFolio() {}

void GuestFolio::addCharge(double amount) {
    totalCharges += amount;
}

void GuestFolio::display() const {
    std::cout << "Guest: " << guestName << " | Room: " << roomNumber
              << " | Total bill: Rs. " << std::fixed << std::setprecision(2)
              << totalCharges << '\n';
}

FoodOrder::FoodOrder() : foodName("No food order"), roomNumber(0), amount(0.0) {}

FoodOrder::FoodOrder(const std::string& food, int room, double price)
    : foodName(food), roomNumber(room), amount(price) {}

FoodOrder::~FoodOrder() {}

void FoodOrder::postCharge(GuestFolio& folio) const {
    folio.addCharge(amount);
}

void FoodOrder::display() const {
    std::cout << "Food order: " << foodName << " | Room: " << roomNumber
              << " | Charge: Rs. " << fixed << setprecision(2) << amount << '\n';
}

LaundryOrder::LaundryOrder() : serviceName("No laundry order"), roomNumber(0), amount(0.0) {}

LaundryOrder::LaundryOrder(const std::string& service, int room, double price)
    : serviceName(service), roomNumber(room), amount(price) {}

LaundryOrder::~LaundryOrder() {}

void LaundryOrder::postCharge(GuestFolio& folio) const {
    folio.addCharge(amount);
}

void LaundryOrder::display() const {
    std::cout << "Laundry order: " << serviceName << " | Room: " << roomNumber
              << " | Charge: Rs. " << std::fixed << std::setprecision(2) << amount << '\n';
}
