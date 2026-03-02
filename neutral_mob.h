#pragma once
#include "mob.h"

class neutral_mob: public mob
{
public:
    neutral_mob();
    neutral_mob(int health_, int speed_, int size_, string name_);
    virtual ~neutral_mob() {}

    virtual void mob_sound();
    void run();
    void get_damaged(int damage);

private:
};
