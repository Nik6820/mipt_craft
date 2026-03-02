#include "sheep.h"
#include <iostream>
using namespace std;

sheep::sheep() : neutral_mob() {}

sheep::sheep(int health_, int speed_, int size_, string name_)
    : neutral_mob(health_, speed_, size_, name_) {}

void sheep::mob_sound() {
    cout << "Beeeeeeeeeeeeee" << endl;
}

void sheep::eat_grass() {
    get_healed(2);
    cout << "Damn this grass is nice" << endl;
}

void sheep::drop() {
    cout << "Mutton has dropped" << endl;
}
