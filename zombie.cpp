#include "zombie.h"
#include <iostream>
using namespace std;

zombie::zombie() : hostile_mob() {}

zombie::zombie(int health_, int speed_, int size_, string name_, int damage_)
    : hostile_mob(health_, speed_, size_, name_, damage_) {}

void zombie::mob_sound() {
    cout << "Brrraaaaaainnsss" << endl;
}

void zombie::infect(mob victim) {
    victim.get_infected();
    deal_damage(victim, damage);
    chase();
}

void zombie::drop() {
    cout << "Rotten flesh has dropped" << endl;
}
