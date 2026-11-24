#ifndef SMART_ROOM_CONTROL_H
#define SMART_ROOM_CONTROL_H

#include <string>

class Thermostat {
private:
    int temperature;
    std::string mode;
    bool powerOn;

public:
    Thermostat();
    Thermostat(int temp, const std::string& m, bool power);
    ~Thermostat();
    void display() const;
};

class LightControl {
private:
    std::string lightMode;
    int brightness;

public:
    LightControl();
    LightControl(const std::string& m, int level);
    ~LightControl();
    void display() const;
};

class DoorLock {
private:
    bool locked;
    std::string keycardCode;

public:
    DoorLock();
    DoorLock(bool isLocked, const std::string& code);
    ~DoorLock();
    void display() const;
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
    SmartRoom();
    SmartRoom(int number, const std::string& type, bool isOccupied,
              int temp, const std::string& mode, const std::string& light,
              int level, bool isLocked, const std::string& code);
    ~SmartRoom();
    void display() const;
};

#endif
