#include "vehicle.h"
#include"iostream"
#include<string>

#include <QMessageBox>


Vehicle::Vehicle(){
//int prueba = num;
}
Vehicle::Vehicle(std::string name,int nWheels,bool engine,int engineCV,bool fuel,char fuelType,std::string color,bool wings,bool reactor,bool undercarriage,bool locomotive,bool wagon,int numWagon,bool spareWheel,std::string registration){
Vehicle::name = name;
Vehicle::nWheels = nWheels;
Vehicle::engine = engine;
Vehicle::engineCV = engineCV;
Vehicle::fuel = fuel;
Vehicle::fuelType = fuelType;
Vehicle::color = color;
Vehicle::wings = wings;
Vehicle::reactor = reactor;
Vehicle::undercarriage = undercarriage;
Vehicle::locomotive = locomotive;
Vehicle::wagon = wagon;
Vehicle::numWagon = numWagon;
Vehicle:: spareWheel = spareWheel;
Vehicle::registration = registration;
  
  if(isASportsCar(nWheels, engine, engineCV, fuel, fuelType, wings, reactor, undercarriage, locomotive, wagon, spareWheel) == true){
          Vehicle::type = "sportscar";
  }else if(isAPlane(nWheels, engine, engineCV, fuel, fuelType, color, wings, reactor, undercarriage, locomotive, wagon, spareWheel) == true){
          Vehicle::type = "plane";
  }else if (isABike(nWheels,engine,fuel,wings,reactor,locomotive,wagon,spareWheel)){
    Vehicle::type = "Bike";
  } else if (isTricycle(nWheels,engine,fuel,reactor,wings,undercarriage,locomotive,wagon,spareWheel)){
      Vehicle::type = "Tricycle";
  }else if(isACar()){
      Vehicle::type = "Car";
  }else if(isAMotorBike()){
      Vehicle::type = "MotorBike";
  }
  
  
  
  else{
          //Caso de mostrar alerta(se puede comprobar el tipo del objeto y si es este crear la ventana y borrar el obj por ejemplo)
         //Vehicle::type = "Wrong type";
         IncorrectInformation();
  }

}

bool Vehicle::isASportsCar(int wheels, bool engine, int enginePower, bool fuel, char fuelType, bool wings, bool reactor, bool landingGear, bool locomotive, int wagons, bool kit){
    if(wheels == 4 && engine == true && fuel == true && wings == false && reactor == false && landingGear == false && locomotive == false && wagons == 0 && kit == false){
        if(enginePower >= 250 && enginePower <= 450 && (fuelType == 'E' || fuelType == 'e' || fuelType == 'G' || fuelType == 'g')){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}

bool Vehicle::isAPlane(int wheels, bool engine, int enginePower, bool fuel, char fuelType, std::string color, bool wings, bool reactor, bool landingGear, bool locomotive, int wagons, bool kit){
    if(wheels == 6 && engine == true && fuel == true && color.compare("White") == 0 && wings == true && reactor == true && landingGear == true && locomotive == false && wagons == 0 && kit == true){
        if(enginePower == 450 && (fuelType == 'q' || fuelType == 'Q')){
            return true;
        }else{
            return false;
        }
    }else{
        return false;
    }
}
bool Vehicle::isABike(int wheels,bool engine,bool fuel,bool wings,bool reactors,bool locomotive,int wagons,bool kit){
    if (wheels ==2 && engine == false && fuel == false && wings == false && reactors == false && locomotive == false && wagons == 0 && kit ==true){
        return true;
    } else {
        return false;
    }
}
bool Vehicle::isTricycle(int wheels,bool engine, bool fuel,bool reactor,bool wings,bool undercarriage,bool locomotive,int wagons,bool kit){
    if (wheels == 3 && engine == false && fuel == false && wings == false && reactor == false && undercarriage == false && locomotive == false && wagons == 0 && kit == false){
        return true;
    } else {
        return false;
    }
}
bool Vehicle::isTrain(){
    if(Vehicle::nWheels==40&&Vehicle::engineCV==450&&(Vehicle::fuelType == 'e'||Vehicle::fuelType == 'd')&&Vehicle::color.compare("Black")&&Vehicle::wings == false&&Vehicle::reactor == false && Vehicle::undercarriage == false && Vehicle::locomotive == true && (Vehicle::numWagon>=5&&Vehicle::numWagon<=20) && Vehicle::spareWheel){
        return true;
    }else{
        return false;
    }
}

bool Vehicle::isACar(){
    if(Vehicle::nWheels == 4 && Vehicle::engine == true &&Vehicle::engineCV >= 80 && Vehicle::engineCV <= 250 && (Vehicle::fuelType == 'e' || Vehicle::fuelType == 'g' || Vehicle::fuelType == 'd' || Vehicle::fuelType == 'h') && Vehicle::wings == false && Vehicle::locomotive == false && Vehicle::wagon == false && Vehicle::undercarriage == false && Vehicle::reactor == false && Vehicle::spareWheel == true){
        return true;
    }else
        return false;
}

bool Vehicle::isAMotorBike(){

    if(Vehicle::nWheels == 2 && Vehicle::engine == true && Vehicle::engineCV >= 80 && Vehicle::engineCV <=450 && (Vehicle::fuelType == 'e' || Vehicle::fuelType == 'g' || Vehicle::fuelType == 'd' || Vehicle::fuelType == 'h') && Vehicle::wings == false && Vehicle::locomotive == false && Vehicle::wagon == false && Vehicle::undercarriage == false && Vehicle::reactor == false && Vehicle::spareWheel == true){
        return true;
    }else{
        return false;
    }
}
std::string Vehicle::getColor(){
    return Vehicle::color;
}
std::string Vehicle::getName(){
    return Vehicle::name;
}
bool Vehicle::getWings(){
    return Vehicle::wings;
}
bool Vehicle::getReactor(){
    return Vehicle::reactor;
}

void Vehicle::IncorrectInformation(){
     QMessageBox errorMessage;
     errorMessage.setText("The information is incorrect, repeat please");
     errorMessage.exec();

} // informacion erronea


