#ifndef VEHICLE_H
#define VEHICLE_H
#include "iostream"


class Vehicle
{
public:

    Vehicle(int nWheels);
    Vehicle(std::string type,std::string name,int nWheels,bool engine,int engineCV,bool fuel,char fuelType,std::string color,bool wings,bool reactor,bool undercarriage,bool locomotive,int wagon,bool spareWheel,std::string registration);

    /*vehicle::name = name;
    vehicle::nWheels = nWheels;
    vehicle::engine = engine;
    vehicle::engineCV = engineCV;
    vehicle::fuel = fuel;
    vehicle::fuelType = fuelType;
    vehicle::color = color;
    vehicle::wings = wings;
    vehicle::reactor = reactor;
    vehicle::undercarriage = undercarriage;
    vehicle::locomotive = locomotive;
    vehicle::wagon = wagon;
    vehicle:: spareWheel = spareWheel;
    vehicle::registration = registration;*/


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

#endif // VEHICLE_H
