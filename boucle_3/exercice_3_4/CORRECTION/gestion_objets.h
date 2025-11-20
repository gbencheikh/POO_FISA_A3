#include "objet.h"
#include <iostream>

using namespace std; 

class GestionObjets {
private:
    Objet** objets;       
    int taille;         
    int nbElements;       

public:
    GestionObjets(int taille) : taille(taille), nbElements(0) {
        objets = new Objet*[taille];
        for (int i = 0; i < taille; i++) {
            objets[i] = nullptr; 
        }
    }

    ~GestionObjets() {
        delete[] objets;
    }

    bool ajouterObjet(Objet* obj) {
        if (nbElements >= taille) {
            cout << "Impossible d'ajouter." << endl;
            return false;
        }
        for (int i = 0; i < taille; i++) {
            if (objets[i] == nullptr) {
                objets[i] = obj;
                nbElements++;
                return true;
            }
        }
        return false; 
    }

    bool ajouterObjet(Objet* obj, int index) {
        if (index < 0 || index >= taille) {
            cout << "Index invalide." << endl;
            return false;
        }
        if (objets[index] != nullptr) {
            cout << "Position déjà utilisée à l'index " << index << "." << endl;
            return false;
        }
        objets[index] = obj;
        nbElements++;
        return true;
    }

    Objet* getObjet(int index){
        return objets[index]; 
    }
    void afficherInfos() const {
        for (int i = 0; i < taille; i++) {
            if (objets[i] != nullptr) {
                cout << "Objet à l'index " << i << ":" << endl;
                objets[i]->afficheInfo();
                cout << endl;
            }
        }
    }
};