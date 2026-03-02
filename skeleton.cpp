#include "skeleton.h"
#include <iostream>
using namespace std;

skeleton::skeleton() : hostile_mob() {}

skeleton::skeleton(int health_, int speed_, int size_, string name_, int damage_)
    : hostile_mob(health_, speed_, size_, name_, damage_) {}

void skeleton::mob_sound() {
    cout << "Spooky scary skeletons" << endl;
}

void skeleton::frighten(mob victim) {
    victim.get_frightened();
    chase();
}

void skeleton::drop() {
    cout << "Bones has dropped" << endl;
}
