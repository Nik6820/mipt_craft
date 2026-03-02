#pragma once
#include <string>
using namespace std;

class mob
{
public:
    int health;
    int hp;
    int speed;
    int size;
    string name;

    mob(int health_, int speed_, int size_, string name_);
    mob();
    virtual ~mob() {}

    virtual void drop();
    virtual void mob_sound();
    void get_damaged(int damage);
    void get_healed(int heal);
    void set_size(int size_);
    void set_health(int health_);
    void set_speed(int speed_);
    int get_health();
    int get_hp();
    int get_size();
    int get_speed();
    string get_name();
    void get_infected();
    void get_bitten();
    void get_frightened();

private:
};
