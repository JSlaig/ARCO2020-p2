 #include "newvehicle.h"


/*EN ESTA CLASE IRAN LOS IFS y LOS METODOS ENCARGADOS DE LA ADMINISTRACION DE LA CLASE VEHICLE*/

 void setLandingGear(bool landingGear);
 void addVehicle();

/*Constructor vacio (de momento)*/
newVehicle::newVehicle()
{

}

void newVehicle::setUndercarriage(bool undercarriage){
    newVehicle::undercarriage = undercarriage;
}
void newVehicle::setLocomotive(bool locomotive){
    newVehicle::locomotive = locomotive;
}
void newVehicle::setWagon(int numWagon){
    newVehicle::wagon = numWagon;
}


void newVehicle::addVehicle(){

     /*Creacion de nuevo vehiculo*/
    /*La idea es que desde mainWindow.cpp se llame a esta clase, que sera el enlace entre intefaz & vehicle.cpp
    que sera la clase que crea el vehiculo como tal*/

    Vehicle vehicle(1);
    //vehicles.push_back(Vehicle vehicle("Informacion"));

}
