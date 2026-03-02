#pragma once
#include "neutral_mob.h"

class chicken: public neutral_mob
{
public:
    chicken();
    chicken(int health_, int speed_, int size_, string name_);
    virtual ~chicken() {}

    void mob_sound() override;
    void lay_an_egg();
    void drop() override;
};
