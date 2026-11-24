#ifndef SMART_ROOM_CONTROL_H
#define SMART_ROOM_CONTROL_H

#include <iostream>
#include <string>

class Thermostat {
private:
    int temperature;
    std::string mode;
    bool powerOn;

public:
    Thermostat() : temperature(24), mode("Auto"), powerOn(false) {}
    Thermostat(int temp, const std::string& m, bool power)
        : temperature(temp), mode(m), powerOn(power) {}
    ~Thermostat() {}

    void display() const {
        std::cout << "Thermostat  : " << (powerOn ? "ON" : "OFF")
                  << " | Mode: " << mode
                  << " | Temp: " << temperature << " C" << std::endl;
    }
};

class LightControl {
private:
    std::string lightMode;
    int brightness;

public:
    LightControl() : lightMode("Off"), brightness(0) {}
    LightControl(const std::string& m, int level)
        : lightMode(m), brightness(level) {}
    ~LightControl() {}

    void display() const {
        std::cout << "Lights      : " << lightMode
                  << " | Brightness: " << brightness << "%" << std::endl;
    }
};

class DoorLock {
private:
    bool locked;
    std::string keycardCode;

public:
    DoorLock() : locked(true), keycardCode("None") {}
    DoorLock(bool isLocked, const std::string& code)
        : locked(isLocked), keycardCode(code) {}
    ~DoorLock() {}

    void display() const {
        std::cout << "Door Lock   : " << (locked ? "Locked" : "Unlocked")
                  << " | Keycard: " << keycardCode << std::endl;
    }
};

class SmartRoom {
private:
    int roomNumber;
    std::string roomType;
    bool occupied;
    Thermostat thermostat;
    LightControl lights;
    DoorLock door;

public:
    SmartRoom() : roomNumber(0), roomType("Standard"), occupied(false) {}

    SmartRoom(int number, const std::string& type, bool isOccupied,
              int temp, const std::string& mode, const std::string& light,
              int level, bool isLocked, const std::string& code)
        : roomNumber(number), roomType(type), occupied(isOccupied),
          thermostat(temp, mode, isOccupied), lights(light, level),
          door(isLocked, code) {}

    ~SmartRoom() {}

    void display() const {
        std::cout << "Room " << roomNumber << " (" << roomType << ") - "
                  << (occupied ? "Occupied" : "Vacant") << std::endl;
        thermostat.display();
        lights.display();
        door.display();
        std::cout << "-------------------------------------------" << std::endl;
    }
};

#endif
