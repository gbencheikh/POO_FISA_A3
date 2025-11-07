#include <iostream> 

using namespace std; 

class Eleve{
public : 
    string nom; 
    string classe;
    double note; 

    Eleve(){
        nom = ""; 
        classe = ""; 
        note = 0; 
    }

    Eleve(string nom, string classe, double note): nom(nom), classe(classe), note(note){ }

    void afficher(){
        cout << "Nom : " << nom << endl;
        cout << "classe : " << classe << endl; 
        cout << "note : " << note << endl;  
    }
}; 

string compare(Eleve E1, Eleve E2){
    if(E1.note >= E2.note){
        return E1.nom; 
    }else{
        return E2.nom; 
    }
}
int main() {
    Eleve E1 = Eleve("Henry" , "APS", 10); 
    Eleve E2 = Eleve("Alexandre" , "JAK", 15); 
    
    E1.afficher(); 

    cout << compare(E1,E2) << endl; 
    return 0; 
}