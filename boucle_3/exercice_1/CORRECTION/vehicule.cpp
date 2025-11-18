#include "vehicule.h"

int Vehicule::getMax_speed(){
    return max_speed; 
}

int Vehicule::getMileage(){
    return mileage; 
}

void Vehicule::setMax_speed(int Max_speed){
    max_speed = Max_speed; 
}

void Vehicule::setMileage(int Mileage){
    mileage = Mileage; 
}