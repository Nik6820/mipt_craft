#ifndef MINECRAFT_H
#define MINECRAFT_H

#include <iostream>
#include <string>

// Food class hierarchy
class food
{
public:
    int hunger_restore;
    float saturation_restore;
    std::string name;
    int quantity;

    food(int hunger_, float saturation_, std::string name_, int quantity_);
    food();
    virtual ~food();

    virtual void eat();
    virtual void get_effect();
    void stack(int amount);
    std::string get_name();
    int get_quantity();
};

class golden_apple : public food
{
public:
    bool is_enchanted;

    golden_apple();
    golden_apple(int hunger_, float saturation_, std::string name_, int quantity_, bool enchanted_);

    void get_effect() override;
    void eat() override;
};

class cooked_beef : public food
{
public:
    cooked_beef();
    cooked_beef(int hunger_, float saturation_, std::string name_, int quantity_);

    void eat() override;
};

class suspicious_stew : public food
{
public:
    std::string effect_type;
    int effect_duration;

    suspicious_stew();
    suspicious_stew(int hunger_, float saturation_, std::string name_, int quantity_, std::string effect_, int duration_);

    void get_effect() override;
    void eat() override;
};

// Potion class hierarchy
class potion
{
public:
    std::string name;
    std::string effect;
    int duration;
    int amplifier;
    bool is_splash;
    bool is_lingering;

    potion(std::string name_, std::string effect_, int duration_, int amplifier_, bool splash_, bool lingering_);
    potion();
    virtual ~potion();

    virtual void drink();
    virtual void apply_effect();
    void splash();
    void linger();
    std::string get_name();
};

class healing_potion : public potion
{
public:
    healing_potion();
    healing_potion(std::string name_, std::string effect_, int duration_, int amplifier_, bool splash_, bool lingering_);

    void apply_effect() override;
    void drink() override;
};

class strength_potion : public potion
{
public:
    strength_potion();
    strength_potion(std::string name_, std::string effect_, int duration_, int amplifier_, bool splash_, bool lingering_);

    void apply_effect() override;
    void drink() override;
};

class invisibility_potion : public potion
{
public:
    invisibility_potion();
    invisibility_potion(std::string name_, std::string effect_, int duration_, int amplifier_, bool splash_, bool lingering_);

    void apply_effect() override;
    void drink() override;
};

#endif
