#include <iostream>
using namespace std;

template<typename T>
class Element {
private:
    T val;

public:
    Element() : val() {}
    T getValue() { return val; }
    void setValue(T value) { val = value; }
};

template<typename T>
class Liste {
private:
    Element<T>** elements;  
    int n;

public:
    Liste() : n(0), elements(nullptr) {}

    void ajouter(T value) {
        // Nouveau tableau plus grand
        Element<T>** temp = new Element<T>*[n + 1];

        // Nouveau premier élément
        temp[0] = new Element<T>();
        temp[0]->setValue(value);

        // Copier anciens éléments
        for (int i = 0; i < n; i++) {
            temp[i + 1] = elements[i];
        }

        // Libérer ancien tableau (mais pas les Element<T>)
        delete[] elements;

        elements = temp;
        n++;
    }

    void ajouter(T value, int i) {
        if (i < 0 || i > n) return;

        Element<T>** temp = new Element<T>*[n + 1];
        Element<T>* elem = new Element<T>();
        elem->setValue(value);

        for (int j = 0; j < i; j++)
            temp[j] = elements[j];

        temp[i] = elem;

        for (int j = i; j < n; j++)
            temp[j + 1] = elements[j];

        delete[] elements;

        elements = temp;
        n++;
    }

    void affiche() {
        for (int i = 0; i < n; i++) {
            cout << elements[i]->getValue() << endl;
        }
    }

    ~Liste() {
        for (int i = 0; i < n; i++)
            delete elements[i];
        delete[] elements;
    }
};

int main() {
    Liste<int>* l = new Liste<int>();
    l->ajouter(5);
    l->ajouter(4);
    l->ajouter(3);
    l->ajouter(9, 1);
    l->affiche();

    delete l;

    Liste<string>* l2 = new Liste<string>();
    l2->ajouter("Hello");
    l2->ajouter("CPI");
    l2->ajouter("A2");
    l2->affiche();

    return 0;
}
