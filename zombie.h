#pragma once
#include "hostile_mob.h"

class zombie: public hostile_mob
{
public:
    zombie();
    zombie(int health_, int speed_, int size_, string name_, int damage_);
    virtual ~zombie() {}

    void mob_sound() override;
    void infect(mob victim);
    void drop() override;
};
