#ifndef NEWVEHICLE_H
#define NEWVEHICLE_H
#include "iostream"
#include <vehicle.h>

class newVehicle
{
public:

    newVehicle();
    void setUndercarriage(bool undercarriage);
    void setLocomotive(bool locomotive);
    void setWagon(int numWagon);
    void addVehicle();

private:

    std::string type;
    std::string name;
    int nWheels;
    bool engine;
    int engineCV;
    bool fuel;
    char fuelType;
    std::string color;
    bool wings;
    bool reactor;
    bool undercarriage;
    bool locomotive;
    int wagon;
    bool spareWheel;
    std::string registration;

};

#endif // NEWVEHICLE_H
