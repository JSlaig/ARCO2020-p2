#ifndef NEWVEHICLE_H
#define NEWVEHICLE_H
#include <iostream>
#include "vehicle.h"

class newVehicle
{
public:

    newVehicle();
    void setUndercarriage(bool undercarriage);
    void setLocomotive(bool locomotive);
    void setWagon(bool wagon);
    void setNumWagon(int numWagon);
    void setFuel(bool fuel);
    void setFuelType(std::string fuelType);
    void addVehicle();

private:

    std::string type;
    std::string name;
    int nWheels;
    bool engine;
    int engineCV;
    bool fuel;
    std::string fuelType;
    std::string color;
    bool wings;
    bool reactor;
    bool undercarriage;
    bool locomotive;
    bool wagon;
    int numWagon;
    bool spareWheel;
    std::string registration;

};

#endif // NEWVEHICLE_H
