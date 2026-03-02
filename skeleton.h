#pragma once
#include "hostile_mob.h"

class skeleton: public hostile_mob
{
public:
    skeleton();
    skeleton(int health_, int speed_, int size_, string name_, int damage_);
    virtual ~skeleton() {}

    void mob_sound() override;
    void frighten(mob victim);
    void drop() override;
};
