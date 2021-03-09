#include "mainwindow.h"
#include "vehicle.h"


#include <QApplication>

void Vehicles();
void newVehicle();

std::vector<Vehicle> vehicles;

int main(int argc, char *argv[]){

    QApplication a(argc, argv);
    MainWindow vehicleWindow;

    /*Metodo principal encargado de todo el funcionamiento*/
    Vehicles();

    vehicleWindow.show();
    return a.exec();

}

void Vehicles(){

    /*Introduccion de nuevo vehiculo*/
    newVehicle();


}

void newVehicle(){

    //vehicles.push_back(Vehicle vehicle("Informacion"));

}
