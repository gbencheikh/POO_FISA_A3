#include "dragons.cpp"

void foo() {
    Creature c3;
    cout << "Nombre de créatures: " << Creature::cpt << endl;
}

void test1() {
    cout << "Test 1: \n";
    Creature c1;
    Creature c2(10, 2, 2);
    cout << "Nombre de créatures: " << Creature::cpt << endl;
    foo();
    cout << "Nombre de créatures: " << Creature::cpt << endl;
}

void bar(Creature c1) {
    Creature c2;
    cout << "Nombre de créatures: " << Creature::cpt << endl;
}

void test2() {
    cout << "Test 2: \n";
    Creature c1;
    Creature c2(10, 2, 2);
    cout << "Nombre de créatures: " << Creature::cpt << endl;
    bar(c2);
    cout << "Nombre de créatures: " << Creature::cpt << endl;
}
int main() {
  	test1();
    test2();
}