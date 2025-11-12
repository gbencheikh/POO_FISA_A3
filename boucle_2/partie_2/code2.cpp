#include "creature.cpp"

void foo(Creature &c) {
    cout << "foo" << endl;
    Creature a = c;
}

int main(int argc, char const *argv[])
{
    Creature ogre;
    cout << "before foo" << endl;
    foo(ogre);
    cout << "after foo" << endl;
    return 0;
}