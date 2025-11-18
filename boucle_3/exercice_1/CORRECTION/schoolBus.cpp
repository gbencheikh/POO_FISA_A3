#include "schoolBus.h"

string SchoolBus::getSchool_name(){
    return school_name; 
}

void SchoolBus::setSchool_name(string School_name){
    school_name = School_name; 
}

int SchoolBus::countBigBus(SchoolBus *T, int size){
    int count = 0; 
    for (int i = 0; i < size; i++){
        if (T[i].mileage >= 200000 && T[i].seat_capacity >= 40){
            count++; 
        }
    }
    return count; 
}