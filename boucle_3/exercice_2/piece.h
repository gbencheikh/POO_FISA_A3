#ifndef PIECE_H
#define PIECE_H
#include <iostream>
using namespace std; 

class Piece{
protected: 
    int nb_windows; 
    string color; 
    string ID; 

public : 
    Piece(int nb_windows, string color, string ID): nb_windows(nb_windows), color(color), ID(ID){}

    void set_nb_windows(int); 
    void set_color(string); 

    int get_nb_windows(); 
    string get_color(); 
    string getID(); 
    
    void afficher_info(); 
}; 

#endif