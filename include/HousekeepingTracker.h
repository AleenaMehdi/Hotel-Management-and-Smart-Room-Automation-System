// Module: Housekeeping & Maintenance Tracker - Ameera Aziz
#ifndef HOUSEKEEPING_TRACKER_H
#define HOUSEKEEPING_TRACKER_H

#include <iostream>
#include <string>

class CleaningRequest {
private:
    int roomNumber;
    std::string assignedStaff;
    std::string status;

public:
    CleaningRequest()
        : roomNumber(100), assignedStaff("Unassigned"), status("Pending") {}

    CleaningRequest(int room, const std::string& staff, const std::string& currentStatus)
        : roomNumber(room), assignedStaff(staff), status(currentStatus) {}

    ~CleaningRequest() {}

    void display() const {
        std::cout << "Room: " << roomNumber
                  << " | Staff: " << assignedStaff
                  << " | Status: " << status << std::endl;
    }
};

class MaintenanceFlag {
private:
    int roomNumber;
    std::string issueDescription;
    std::string priority;

public:
    MaintenanceFlag()
        : roomNumber(100), issueDescription("Routine Inspection"), priority("Low") {}

    MaintenanceFlag(int room, const std::string& issue, const std::string& level)
        : roomNumber(room), issueDescription(issue), priority(level) {}

    ~MaintenanceFlag() {}

    void display() const {
        std::cout << "Room: " << roomNumber
                  << " | Issue: " << issueDescription
                  << " | Priority: " << priority << std::endl;
    }
};

#endif
