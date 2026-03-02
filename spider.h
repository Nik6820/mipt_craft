#pragma once
#include "hostile_mob.h"

class spider: public hostile_mob
{
public:
    spider();
    spider(int health_, int speed_, int size_, string name_, int damage_);
    virtual ~spider() {}

    void mob_sound() override;
    void bite(mob victim);
    void drop() override;
};
