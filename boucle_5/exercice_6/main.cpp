#include <iostream> 
using namespace std; 

class Element{
private: 
    int val; 
    Element* next; 
public :
    Element():val(0),next(NULL){}
    // getters 
    int getValue(){return val; }
    Element* getNext(){return next;}

    // setters
    void setValue(int value){val=value;}
    void setNext(Element* l){next = l;}

};

class Liste{
private : 
    Element* head; 

public : 
    Liste() : head(NULL){}

    void ajouter(int value){
        Element* l = new Element(); 
        l->setValue(value); 
        l->setNext(head);
        head = l;

        cout << (head)->getValue() << endl;  
    }

    void ajouter(int value, int i){
        Element* l = new Element(); 
        l->setValue(value);
        
        Element* liste = head; 
        for(int it = 0; it <= i; it++, liste=liste->getNext()); 

        l->setNext(liste->getNext()); 
        liste->setNext(l); 
    }

    void affiche(){
        Element* liste = head;

        while (liste != NULL){
            cout << liste->getValue() << endl; 
            liste = liste->getNext();
        }
    }
};

int main(){
    Liste* l = new Liste(); 
    l->ajouter(5); 
    l->affiche(); 

    return 0; 
}