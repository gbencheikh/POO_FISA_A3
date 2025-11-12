#include "creature.cpp"

Creature foo(Creature &c) {
    cout << "foo" << endl;
    Creature local = c;
    return c;
}

int main(int argc, char const *argv[])
{
    Creature ogre;
    cout << "before foo" << endl;
    Creature shrek = foo(ogre);
    cout << "after foo" << endl;
    return 0;
}