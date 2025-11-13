#include <iostream> 

using namespace std; 

int cpt = 0; 

class Creature{
private: 
    int pv; 
    int pa; 
    int niveau; 

public : 
    Creature(): pv(0), pa (0), niveau (0){cpt++; }
    Creature(int pv, int pa, int niveau): pv(pv), pa(pa), niveau(niveau){cpt++; }

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

    cout << "Nombre de creatures " << cpt << endl; 

    Creature C2 = Creature(20,15,2);

    cout << "Nombre de creatures " << cpt << endl; 

    int d = H.attaque(); 

    C.subitDegat(d); 

    d = C.attaque(); 

    H.subitDegat(d); 

    H.affiche(); 
    C.affiche(); 

    return 0; 
}