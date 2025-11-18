#ifndef VEHICULE_H
#define VEHICULE_H

class Vehicule{
protected : 
    int max_speed; 
    int mileage; 

public: 
    Vehicule(): max_speed(240), mileage(0){}

    // getters 
    int getMax_speed(); 
    int getMileage(); 

    // setters 
    void setMax_speed(int); 
    void setMileage(int); 
}; 

#endif