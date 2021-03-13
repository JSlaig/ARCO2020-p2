#ifndef VEHICLE_H
#define VEHICLE_H
#include "iostream"


class Vehicle
{
public:

    Vehicle(int num);
    Vehicle(std::string type,std::string name,int nWheels,bool engine,int engineCV,bool fuel,char fuelType,std::string color,bool wings,bool reactor,bool undercarriage,bool locomotive,bool wagon,int numWagon,bool spareWheel,std::string registration);

    //Esto para que es?? No deberia ser en el cpp?    
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
    
    
    std::string getName();
    std::string getType();
    std::string getNWheels();
    std::string getEngine();
    std::string getEngineCV();
    std::string getFuel();
    std::string getFuelType();
    std::string getColor();
    std::string getWings();
    std::string getReactor();
    std::string getUndercarriage();
    std::string getLocomotive();
    std::string getWagon();
    std::string getSpareWheel();
    std::string getRegistration();    
    


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
    bool wagon;
    int numWagon;
    bool spareWheel;
    std::string registration;

};

#endif // VEHICLE_H
