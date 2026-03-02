#pragma once
#include "mob.h"

class hostile_mob: public mob
{
public:
    int damage;

    hostile_mob();
    hostile_mob(int health_, int speed_, int size_, string name_, int damage_);
    virtual ~hostile_mob() {}

    virtual void mob_sound() override;
    void deal_damage(mob victim, int damage);
    void chase();
    int get_damage();

private:
};
