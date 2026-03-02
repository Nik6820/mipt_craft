#pragma once
#include "neutral_mob.h"

class sheep: public neutral_mob
{
public:
    sheep();
    sheep(int health_, int speed_, int size_, string name_);
    virtual ~sheep() {}

    void mob_sound() override;
    void eat_grass();
    void drop() override;
};
