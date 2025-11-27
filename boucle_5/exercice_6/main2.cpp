#include <iostream> 
using namespace std; 

typedef double elementType; 

template<typename T>
class Element{
private: 
    T val; 

public :
    Element():val(0){}
    
    // getters 
    T getValue(){return val; }

    // setters
    void setValue(T value){val=value;}
};

template<typename T>
class Liste{
private : 
    T** elements; 
    int n; 

public : 
    Liste(){
        n = 0; 
        elements = new Element*[n]; 
    }

    void ajouter(T value){
        n++; 
        Element** T = new Element*[n]; 

        Element* elem = new Element;
        elem->setValue(value);  

        T[0] = elem;
        
        for(int i = 0; i < n-1; i++){
            T[i+1] = elements[i]; 
        }

        elements = T; 
    }

    void ajouter(T value, int i){
        Element* elem = new Element;
        elem->setValue(value);

        n++; 
        Element** T = new Element*[n]; 

        for(int j = 0; j < i; j++){
            T[j] = elements[j]; 
        }
        T[i] = elem; 
        for(int j = i+1; j < n; j++){
            T[j] = elements[j-1]; 
        }

        elements = T; 
    }

    void affiche(){
        for(int i = 0 ; i < n ; i++){
            cout << elements[i]->getValue() << endl; 
        }
    }
};

int main(){
    Liste<int>* l = new Liste<int>(); 
    l->ajouter(5); 
    l->ajouter(4); 
    l->ajouter(3);
    l->ajouter(9,1);  
    l->affiche(); 

    return 0; 
}