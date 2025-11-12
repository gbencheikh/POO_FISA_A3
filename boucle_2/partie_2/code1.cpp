#include "creature.cpp"

void foo(Creature c) {
    cout << "foo" << endl;
}
int main(int argc, char const *argv[])
{
    Creature ogre;
    Creature shrek = ogre;
    cout << "before foo" << endl;
    foo(shrek);
    cout << "after foo" << endl;
    return 0;
}