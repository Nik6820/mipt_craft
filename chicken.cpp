#include "chicken.h"
#include <iostream>
using namespace std;

chicken::chicken() : neutral_mob() {}

chicken::chicken(int health_, int speed_, int size_, string name_)
    : neutral_mob(health_, speed_, size_, name_) {}

void chicken::mob_sound() {
    cout << "Bawk bawk bawk" << endl;
}

void chicken::lay_an_egg() {
    cout << "Egg has dropped" << endl;
}

void chicken::drop() {
    cout << "Chicken meat has dropped" << endl;
}
