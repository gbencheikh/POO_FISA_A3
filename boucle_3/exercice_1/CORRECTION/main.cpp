#include "vehicule.h"
#include "bus.h"
#include "schoolBus.h"

int main(){
    SchoolBus bus1("CESI ASSAT"); 
    SchoolBus bus2("CESI PAU"); 

    bus1.setSeat_capacity(42);
    bus1.setMileage(220000);

    SchoolBus busArray[] = {bus1, bus2};

    cout << "Count Big Bus = " << SchoolBus::countBigBus(busArray, 2) << endl; 

    return 0; 
}