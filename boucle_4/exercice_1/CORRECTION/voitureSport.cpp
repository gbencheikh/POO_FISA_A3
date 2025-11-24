#include "voitureSport.h"
#include <iostream> 

using namespace std; 

VoitureSport::VoitureSport():Voiture(){
    type = "VOITURE SPORT"; 
}
VoitureSport::VoitureSport(int vitesseMax_, int acceleration_){
    if (vitesseMax_ <= 200){
        vitesseMax = vitesseMax_; 
    }else{
        vitesseMax = 200; 
    }

    if (acceleration_ <= 8)
        acceleration = acceleration_; 
    else    
        acceleration = 8;
    type = "VOITURE SPORT";
}