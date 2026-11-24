# Hotel Management and Smart Room Automation System

A modular Object-Oriented C++ system designed to automate smart room controls, room service billing, room inventory reservations, front desk operations, and housekeeping maintenance tracking.

## Project Structure

```text
Hotel-Management-and-Smart-Room-Automation-System/
├── include/
│   ├── SmartRoomControl.h        # Smart Room Control Simulator Module (4 classes)
│   ├── RoomServiceBilling.h      # Room Service & Restaurant Billing Module (3 classes)
│   ├── RoomInventory.h           # Room Inventory & Reservation Module (2 classes)
│   ├── FrontDesk.h               # Front Desk Check-In & Check-Out Module (2 classes)
│   └── HousekeepingTracker.h     # Housekeeping & Maintenance Tracker Module (2 classes)
├── src/
│   └── main.cpp                  # Integrated system entry point
└── README.md
```

## Team Members & Modules

| Member | Role / Module | Header File | Classes |
| :--- | :--- | :--- | :---: |
| **Aleena Mehdi** | Team Lead — Smart Room Control | `include/SmartRoomControl.h` | 4 |
| **Saman Imran** | Room Inventory & Reservation | `include/RoomInventory.h` | 2 |
| **Ilsa Fatima** | Front Desk Check-In & Check-Out | `include/FrontDesk.h` | 2 |
| **Qaswa Armghan** | Room Service & Restaurant Billing | `include/RoomServiceBilling.h` | 3 |
| **Ameera Aziz** | Housekeeping & Maintenance Tracker | `include/HousekeepingTracker.h` | 2 |

## Build & Run

```bash
g++ -Iinclude src/main.cpp -o hotel_system
./hotel_system
```
