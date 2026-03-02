#include "spider.h"
#include <iostream>
using namespace std;

spider::spider() : hostile_mob() {}

spider::spider(int health_, int speed_, int size_, string name_, int damage_)
    : hostile_mob(health_, speed_, size_, name_, damage_) {}

void spider::mob_sound() {
    cout << "HISSSSSSSSSSSSSSSSSS" << endl;
}

void spider::bite(mob victim) {
    victim.get_bitten();
    deal_damage(victim, damage);
    chase();
}

void spider::drop() {
    cout << "Cobweb has dropped" << endl;
}
