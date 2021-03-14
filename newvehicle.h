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
    void addVehicle();

private:

    std::string type;
    std::string name;
    int nWheels;
	@@ -32,7 +62,5 @@ class newVehicle
    int numWagon;
    bool spareWheel;
    std::string registration;

};

#endif // NEWVEHICLE_H
