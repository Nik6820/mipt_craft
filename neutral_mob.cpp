#include "neutral_mob.h"
#include <iostream>
using namespace std;

neutral_mob::neutral_mob() : mob() {}

neutral_mob::neutral_mob(int health_, int speed_, int size_, string name_)
    : mob(health_, speed_, size_, name_) {}

void neutral_mob::mob_sound() {
    cout << "I still do not know EXACTLY who i am!" << endl;
}

void neutral_mob::run() {
    speed = speed * 1.5;
}

void neutral_mob::get_damaged(int damage) {
    hp = hp - damage;
    run();
    if (hp <= 0 ) {
        hp = 0;
        cout << "The " << name << " is killed!!!" << endl;
        drop();
    }
}
