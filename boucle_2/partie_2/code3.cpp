#include "creature.cpp"

void bar(Creature* c) {
    cout << "bar" << endl;
    delete c;
}

int main(int argc, char const *argv[])
{
    Creature ogre;
    Creature *shrek = new Creature(ogre);
    cout << "before bar" << endl;
    bar(shrek);
    cout << "after bar" << endl;
    return 0;
}