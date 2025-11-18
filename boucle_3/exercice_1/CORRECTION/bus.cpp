#include "bus.h"
#include <iostream>

using namespace std; 

int Bus::getSeat_capacity(){
    return seat_capacity; 
}

void Bus::setSeat_capacity(int Seat_capacity){
    if (Seat_capacity >= 50 || Seat_capacity <= 10) 
        Seat_capacity = 50; 
    else 
        seat_capacity = Seat_capacity; 
}

void Bus::get_info(){
    cout << "Il s'agit d'un bus d'une capacité de" << seat_capacity << "places, avec une vitesse maximale de " << max_speed << " km/h et son kilométrage est de" << mileage <<"km." << endl; 
}