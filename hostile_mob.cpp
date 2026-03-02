#include "hostile_mob.h"
#include <iostream>
using namespace std;

hostile_mob::hostile_mob() : mob() {}

hostile_mob::hostile_mob(int health_, int speed_, int size_, string name_, int damage_)
    : mob(health_, speed_, size_, name_), damage(damage_) {}

void hostile_mob::mob_sound() {
    cout << "I still do not know EXACTLY who i am!" << endl;
}

void hostile_mob::deal_damage(mob victim, int damage) {
    victim.get_damaged(damage);
}

void hostile_mob::chase() {
    speed = speed * 2;
}

int hostile_mob::get_damage() {
    return damage;
}
