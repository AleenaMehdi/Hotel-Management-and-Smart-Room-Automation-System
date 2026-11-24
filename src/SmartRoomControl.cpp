#include "SmartRoomControl.h"
#include <iostream>

Thermostat::Thermostat() : temperature(24), mode("Auto"), powerOn(false) {}

Thermostat::Thermostat(int temp, const std::string& m, bool power)
    : temperature(temp), mode(m), powerOn(power) {}

Thermostat::~Thermostat() {
    std::cout << "Thermostat destroyed." << std::endl;
}

void Thermostat::display() const {
    std::cout << "Thermostat  : " << (powerOn ? "ON" : "OFF")
              << " | Mode: " << mode
              << " | Temp: " << temperature << " C" << std::endl;
}

LightControl::LightControl() : lightMode("Off"), brightness(0) {}

LightControl::LightControl(const std::string& m, int level)
    : lightMode(m), brightness(level) {}

LightControl::~LightControl() {
    std::cout << "LightControl destroyed." << std::endl;
}

void LightControl::display() const {
    std::cout << "Lights      : " << lightMode
              << " | Brightness: " << brightness << "%" << std::endl;
}

DoorLock::DoorLock() : locked(true), keycardCode("None") {}

DoorLock::DoorLock(bool isLocked, const std::string& code)
    : locked(isLocked), keycardCode(code) {}

DoorLock::~DoorLock() {
    std::cout << "DoorLock destroyed." << std::endl;
}

void DoorLock::display() const {
    std::cout << "Door Lock   : " << (locked ? "Locked" : "Unlocked")
              << " | Keycard: " << keycardCode << std::endl;
}

SmartRoom::SmartRoom() : roomNumber(0), roomType("Standard"), occupied(false) {}

SmartRoom::SmartRoom(int number, const std::string& type, bool isOccupied,
                     int temp, const std::string& mode, const std::string& light,
                     int level, bool isLocked, const std::string& code)
    : roomNumber(number), roomType(type), occupied(isOccupied),
      thermostat(temp, mode, isOccupied), lights(light, level),
      door(isLocked, code) {}

SmartRoom::~SmartRoom() {
    std::cout << "Room " << roomNumber << " destroyed." << std::endl;
}

void SmartRoom::display() const {
    std::cout << "Room " << roomNumber << " (" << roomType << ") - "
              << (occupied ? "Occupied" : "Vacant") << std::endl;
    thermostat.display();
    lights.display();
    door.display();
    std::cout << "-------------------------------------------" << std::endl;
}
