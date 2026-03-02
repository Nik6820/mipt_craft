#pragma once
#include <string>

class Tool {
protected:
    int durability;
    int maxDurability;
    std::string material;
    std::string name;
    int damage;
    int miningSpeed;

public:
    Tool();
    Tool(int durability_, int maxDurability_, std::string material_, std::string name_, int damage_, int miningSpeed_);
    virtual ~Tool();

    virtual void use();
    void repair(int amount);
    virtual void onBreak();
    virtual void sound();
    void enchant(int dmgBonus, int speedBonus);

    // Getters
    int getDurability() const;
    int getMaxDurability() const;
    std::string getMaterial() const;
    std::string getName() const;
    int getDamage() const;
    int getMiningSpeed() const;

    // Setters
    void setDurability(int d);
    void setMaterial(const std::string& m);
};

class Pickaxe : public Tool {
public:
    Pickaxe();
    Pickaxe(int durability_, int maxDurability_, std::string material_, std::string name_, int damage_, int miningSpeed_);
    void use();
    void sound();
    void onBreak();
};

class Axe : public Tool {
public:
    Axe();
    Axe(int durability_, int maxDurability_, std::string material_, std::string name_, int damage_, int miningSpeed_);
    void use();
    void sound();
    void onBreak();
};

class Shovel : public Tool {
public:
    Shovel();
    Shovel(int durability_, int maxDurability_, std::string material_, std::string name_, int damage_, int miningSpeed_);
    void use();
    void sound();
    void onBreak();
};

class Sword : public Tool {
public:
    Sword();
    Sword(int durability_, int maxDurability_, std::string material_, std::string name_, int damage_, int miningSpeed_);
    void use();
    void sound();
    void onBreak();
};

class Hoe : public Tool {
public:
    Hoe();
    Hoe(int durability_, int maxDurability_, std::string material_, std::string name_, int damage_, int miningSpeed_);
    void use();
    void sound();
    void onBreak();
};