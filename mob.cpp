#include "mob.h"
#include <iostream>
using namespace std;

mob::mob(int health_, int speed_, int size_, string name_):
    health(health_), speed(speed_), size(size_), hp(health_), name(name_) {
    cout << "The " << name << " is born" << endl;
}

mob::mob() {
    cout << "An empty mob is born" << endl;
}

void mob::drop() {
    cout << "I can not drop anything, i barely exist" << endl;
}

void mob::mob_sound() {
    cout << "I do not know who i am..." << endl;
}

void mob::get_damaged(int damage) {
    hp = hp - damage;
    if (hp <= 0 ) {
        hp = 0;
        cout << "The " << name << " is killed!!!" << endl;
        drop();
    }
}

void mob::get_healed(int heal) {
    hp = hp + heal;
    if (hp > health) {
        hp = health;
    }
}

void mob::set_size(int size_) {
    size = size_;
}

void mob::set_health(int health_) {
    health = health_;
}

void mob::set_speed(int speed_) {
    speed = speed_;
}

int mob::get_health() {
    return health;
}

int mob::get_hp() {
    return hp;
}

int mob::get_size() {
    return size;
}

int mob::get_speed() {
    return speed;
}

string mob::get_name() {
    return name;
}

void mob::get_infected() {
    health = health / 2;
    if (hp > health) {
        hp = health;
    }
}

void mob::get_bitten() {
    speed = speed / 3;
}

void mob::get_frightened() {
    speed = 0;
}
