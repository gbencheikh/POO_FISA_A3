#include <iostream> 

using namespace std; 

class Instrument{
    public : 
    virtual void son() = 0; 
}; 

class Saxo : public Instrument {
    public : 
    void son(){
        cout << "Son d'un saxophone " << endl; 
    }
}; 

class Piano : public Instrument {
    public : 
    void son(){
        cout << "Son d'un Piano " << endl; 
    }
}; 

class Guitar : public Instrument {
    public : 
    void son(){
        cout << "Son d'un Guitar " << endl; 
    }
}; 

int main(){
    int choix; 
    do{
        cout << "Quel instrument vous voulez jouer " << endl;
        cout << "1- Piano" << endl; 
        cout << "2- Saxophone" << endl; 
        cout << "3- Guitar " << endl;

        cin >> choix; 

        Instrument* I; 
        
        switch (choix){
            case 1 : {
                I = new Piano();  
                break;         
            }
            case 2 : {
                I = new Saxo(); 
                break; 
            }
            default : {
                I = new Guitar(); 
                break; 
            }
        }

        I->son(); 

    }while(choix !=1 && choix !=2);


    return 0; 
}

