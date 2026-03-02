#include "cow.h"
#include <iostream>
using namespace std;

cow::cow() : neutral_mob() {}

cow::cow(int health_, int speed_, int size_, string name_)
    : neutral_mob(health_, speed_, size_, name_) {}

void cow::mob_sound() {
    cout << "Mooooooooooooooo" << endl;
}

void cow::get_milked() {
    get_damaged(2);
    cout << "I love milk!" << endl;
}

void cow::drop() {
    cout << "Beef has dropped" << endl;
}
