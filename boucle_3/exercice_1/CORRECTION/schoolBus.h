#ifndef SCHOOLBUS_H
#define BUSSCHOOLBUS_H_H

#include "bus.h"
#include <iostream> 

using namespace std; 

class SchoolBus : public Bus{
private : 
    string school_name; 
public : 
    SchoolBus(string school_name) : Bus(), school_name(school_name){}

    string getSchool_name(); 

    void setSchool_name(string); 

    static int countBigBus(SchoolBus* T, int size); 
}; 

#endif