// Module: Room Inventory & Reservation - Saman Imran
#ifndef ROOM_INVENTORY_H
#define ROOM_INVENTORY_H

#include <iostream>
#include <string>

class RoomCategory {
private:
    std::string categoryName;
    double baseRate;
    int totalRooms;

public:
    RoomCategory() : categoryName("Standard"), baseRate(120.0), totalRooms(20) {}

    RoomCategory(const std::string& name, double rate, int rooms)
        : categoryName(name), baseRate(rate), totalRooms(rooms) {}

    ~RoomCategory() {}

    void display() const {
        std::cout << "Category: " << categoryName
                  << " | Base Rate: $" << baseRate
                  << " | Total Rooms: " << totalRooms << std::endl;
    }
};

class SeasonalBooking {
private:
    std::string seasonName;
    int bookedRooms;
    bool peakSeason;

public:
    SeasonalBooking() : seasonName("Regular"), bookedRooms(5), peakSeason(false) {}

    SeasonalBooking(const std::string& season, int booked, bool peak)
        : seasonName(season), bookedRooms(booked), peakSeason(peak) {}

    ~SeasonalBooking() {}

    void display() const {
        std::cout << "Season: " << seasonName
                  << " | Booked Rooms: " << bookedRooms
                  << " | Peak Season: " << (peakSeason ? "Yes" : "No") << std::endl;
    }
};

#endif
