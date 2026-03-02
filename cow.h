#pragma once
#include "neutral_mob.h"

class cow: public neutral_mob
{
public:
    cow();
    cow(int health_, int speed_, int size_, string name_);
    virtual ~cow() {}

    void mob_sound() override;
    void get_milked();
    void drop() override;
};
