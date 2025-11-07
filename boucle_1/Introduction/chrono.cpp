#include <iostream> 

using namespace std; 

class Chrono{
public : 
    int heures; 
    int minutes; 
    int secondes; 

    Chrono(): heures(0), minutes(0), secondes(0){} 
    Chrono(int h, int m, int s): heures(h), minutes(m), secondes(s){} 

    void affiche(){
        cout << heures << ":" << minutes << ":" << secondes << endl; 
    }

    void avance(int s){
        secondes += s; 

        if(secondes >= 60){
            secondes = secondes - 60; 
            minutes += 1; 

            if(minutes >= 60){
                minutes = 0; 
                heures++; 

                if(heures >= 24){
                    heures = 0; 
                }
            }
        }
    }
};

int main(){
    Chrono c = Chrono(23,59,46); 

    c.affiche(); 
    c.avance(20); 
    c.affiche(); 
}