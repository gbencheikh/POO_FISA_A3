#include <iostream> 

using namespace std; 

class Creature{
private: 
    int pv; 
    int pa; 
    int niveau; 

public : 
    Creature(): pv(0), pa (0), niveau (0){}
    Creature(int pv, int pa, int niveau): pv(pv), pa(pa), niveau(niveau){}

    void affiche(){
        cout << "Creature" ; 
        cout << "PV : " << pv ; 
        cout << "PA : " << pa ; 
        cout << "Niveau :"<< niveau << endl; 
    }

    int attaque(){
        return pa*niveau; 
    }

    void subitDegat(int degats){
        pv -= degats; 
    }

    bool estVivant(){
        return (pv > 0); 
    }
};

class Heros{
private: 
    string nom; 
    int pv; 
    int pa; 

public : 
    // constructeurs
    Heros(): nom(""), pv(0), pa(0){}
    Heros(string nom, int pv, int pa): nom(nom), pv(pv), pa(pa){}

    void affiche(){
        cout << "Heros"; 
        cout << "Nom : " << nom;
        cout << "PV : " << pv; 
        cout << "PA : " << pa << endl; 
    }

    int attaque(){
        return pa; 
    }

    void subitDegat(int degats){
        pv -= degats; 
    }

    bool estVivant(){
        return (pv > 0);  
    }
}; 


int main(){
    Heros H = Heros("Hrun", 10, 8); 
    Creature C = Creature(10,10,5); 

    H.affiche(); 
    C.affiche(); 

    int d = H.attaque(); 

    C.subitDegat(d); 

    d = C.attaque(); 

    H.subitDegat(d); 

    H.affiche(); 
    C.affiche(); 
}