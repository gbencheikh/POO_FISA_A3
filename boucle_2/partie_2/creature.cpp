#include <iostream>
using namespace std;

class Creature {
public:
    Creature() {} // Constructeur par défaut sans paramètre
    Creature(const Creature &c) {
    // Constructeur par copie
    cout << "A creature has been duplicated" << endl;
    }
    ~Creature() {
    // Destructeur
    cout << "A Creature has been destroyed" << endl;
    }
};