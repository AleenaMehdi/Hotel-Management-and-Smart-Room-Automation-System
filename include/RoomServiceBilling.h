#ifndef ROOM_SERVICE_BILLING_H
#define ROOM_SERVICE_BILLING_H

#include <string>

class GuestFolio {
private:
    std::string guestName;
    int roomNumber;
    double totalCharges;

public:
    GuestFolio();
    GuestFolio(const std::string& name, int room, double total);
    ~GuestFolio();

    void addCharge(double amount);
    void display() const;
};

class FoodOrder {
private:
    std::string foodName;
    int roomNumber;
    double amount;

public:
    FoodOrder();
    FoodOrder(const std::string& food, int room, double price);
    ~FoodOrder();

    void postCharge(GuestFolio& folio) const;
    void display() const;
};

class LaundryOrder {
private:
    std::string serviceName;
    int roomNumber;
    double amount;

public:
    LaundryOrder();
    LaundryOrder(const std::string& service, int room, double price);
    ~LaundryOrder();

    void postCharge(GuestFolio& folio) const;
    void display() const;
};

#endif
