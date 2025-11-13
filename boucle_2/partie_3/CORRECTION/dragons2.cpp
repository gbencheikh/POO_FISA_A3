#include <iostream> 

using namespace std; 

class Creature{
private: 
    int pv; 
    int pa; 
    int niveau; 

public : 
    static int cpt;  

    Creature(): pv(0), pa (0), niveau (0){cpt++; }
    Creature(int pv, int pa, int niveau): pv(pv), pa(pa), niveau(niveau){cpt++; }
    Creature(Creature& C){
        pv = C.getPV();
        pa = C.getPA(); 
        niveau = C.getNiveau(); 
        cpt++; 
    }

    int getPV(){return pv; }
    int getPA(){return pa; }
    int getNiveau(){return niveau; }
    void affiche(){
        cout << "Creature" ; 
        cout << " PV : " << pv ; 
        cout << " PA : " << pa ; 
        cout << " Niveau :"<< niveau << endl; 
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
    ~Creature(){cpt--;}
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
        cout << " Nom : " << nom;
        cout << " PV : " << pv; 
        cout << " PA : " << pa << endl; 
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

int Creature::cpt = 0; 
