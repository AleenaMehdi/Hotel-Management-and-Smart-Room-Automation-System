#include "../include/SmartRoomControl.h"
#include "../include/RoomServiceBilling.h"
#include "../include/RoomInventory.h"
#include "../include/FrontDesk.h"
#include "../include/HousekeepingTracker.h"
#include <iostream>

int main() {
    std::cout << "===== SMART ROOM CONTROL SIMULATOR =====" << std::endl;
    SmartRoom room1(402, "ExecutiveSuite", true, 21, "Cool",
                    "Ambient", 40, true, "994a-bc12");
    SmartRoom room2(101, "Deluxe", true, 23, "Auto",
                    "Bright", 100, false, "55f2-a901");
    SmartRoom room3;
    room1.display();
    room2.display();
    room3.display();

    std::cout << "\n===== ROOM SERVICE & RESTAURANT BILLING =====" << std::endl;
    GuestFolio guest1;
    GuestFolio guest2("Ali Ahmed", 205, 0.0);
    FoodOrder food1;
    FoodOrder food2("Chicken Biryani", 205, 650.0);
    LaundryOrder laundry1;
    LaundryOrder laundry2("Wash and Iron", 205, 300.0);

    food1.display();
    food2.display();
    laundry1.display();
    laundry2.display();

    food2.postCharge(guest2);
    laundry2.postCharge(guest2);

    std::cout << "\nMASTER GUEST FOLIO\n";
    guest1.display();
    guest2.display();

    std::cout << "\n===== ROOM INVENTORY & RESERVATION =====" << std::endl;
    RoomCategory c1;
    RoomCategory c2("Deluxe Suite", 280.0, 15);
    SeasonalBooking s1;
    SeasonalBooking s2("Winter Holidays", 12, true);
    c1.display();
    c2.display();
    s1.display();
    s2.display();

    std::cout << "\n===== FRONT DESK CHECK-IN & CHECK-OUT =====" << std::endl;
    GuestCheckIn g1;
    GuestCheckIn g2("Ilsa Fatima", "ID-2025332085", 250.0);
    KeycardHandover k1;
    KeycardHandover k2(30, "KC-30A", false);
    g1.display();
    g2.display();
    k1.display();
    k2.display();

    std::cout << "\n===== HOUSEKEEPING & MAINTENANCE TRACKER =====" << std::endl;
    CleaningRequest req1;
    CleaningRequest req2(401, "AMEERA", "Routed After Checkout");
    MaintenanceFlag flag1;
    MaintenanceFlag flag2(204, "Leaking AC", "High");

    req1.display();
    req2.display();
    flag1.display();
    flag2.display();

    return 0;
}
