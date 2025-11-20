#ifndef OBJET_H
#define OBJET_H

class Objet{
public: 
    virtual double aire() = 0; 
    virtual double perimetre() = 0; 
    virtual void afficheInfo() = 0; 
}; 

#endif