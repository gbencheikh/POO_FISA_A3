#ifndef BUS_H
#define BUS_H

#include "vehicule.h"

class Bus : public Vehicule{
protected: 
    int seat_capacity; 
public: 
    Bus(): Vehicule(), seat_capacity(10){} 

    // getters 
    int getSeat_capacity(); 
    
    // setters 
    void setSeat_capacity(int); 

    // Methods 
    void get_info(); 
}; 

#endif