#include "instruments.h"
#include <iostream>
using namespace std;

// ---------- Tool ----------
Tool::Tool() : durability(0), maxDurability(0), material("unknown"), name("unknown"), damage(0), miningSpeed(0) {
    cout << "An empty tool is created" << endl;
}

Tool::Tool(int durability_, int maxDurability_, string material_, string name_, int damage_, int miningSpeed_)
    : durability(durability_), maxDurability(maxDurability_), material(material_), name(name_), damage(damage_), miningSpeed(miningSpeed_) {
    cout << "The " << name << " is crafted from " << material << endl;
}

Tool::~Tool() {}

void Tool::use() {
    if (durability <= 0) {
        cout << "The " << name << " is already broken!" << endl;
        return;
    }
    durability--;
    cout << "Using the " << name << ". Durability left: " << durability << "/" << maxDurability << endl;
    if (durability <= 0) {
        onBreak();
    }
}

void Tool::repair(int amount) {
    durability += amount;
    if (durability > maxDurability) {
        durability = maxDurability;
    }
    cout << "Repairing the " << name << ". Durability now: " << durability << "/" << maxDurability << endl;
}

void Tool::onBreak() {
    cout << "The " << name << " breaks with a loud crack!" << endl;
}

void Tool::sound() {
    cout << "I am a tool, hear me clang!" << endl;
}

void Tool::enchant(int dmgBonus, int speedBonus) {
    damage += dmgBonus;
    miningSpeed += speedBonus;
    cout << "The " << name << " is enchanted! Damage: " << damage << ", Mining speed: " << miningSpeed << endl;
}

int Tool::getDurability() const { return durability; }
int Tool::getMaxDurability() const { return maxDurability; }
string Tool::getMaterial() const { return material; }
string Tool::getName() const { return name; }
int Tool::getDamage() const { return damage; }
int Tool::getMiningSpeed() const { return miningSpeed; }

void Tool::setDurability(int d) { durability = d; }
void Tool::setMaterial(const string& m) { material = m; }

// ---------- Pickaxe ----------
Pickaxe::Pickaxe() : Tool() {}

Pickaxe::Pickaxe(int durability_, int maxDurability_, string material_, string name_, int damage_, int miningSpeed_)
    : Tool(durability_, maxDurability_, material_, name_, damage_, miningSpeed_) {}

void Pickaxe::use() {
    if (durability <= 0) {
        cout << "The " << name << " pickaxe is broken!" << endl;
        return;
    }
    durability--;
    cout << "Mining stone with " << name << " pickaxe. Durability: " << durability << "/" << maxDurability << endl;
    if (durability <= 0) {
        onBreak();
    }
}

void Pickaxe::sound() {
    cout << "Tink! Tink! Tink!" << endl;
}

void Pickaxe::onBreak() {
    cout << "The pickaxe shatters into pieces!" << endl;
}

// ---------- Axe ----------
Axe::Axe() : Tool() {}

Axe::Axe(int durability_, int maxDurability_, string material_, string name_, int damage_, int miningSpeed_)
    : Tool(durability_, maxDurability_, material_, name_, damage_, miningSpeed_) {}

void Axe::use() {
    if (durability <= 0) {
        cout << "The " << name << " axe is broken!" << endl;
        return;
    }
    durability--;
    cout << "Chopping wood with " << name << " axe. Durability: " << durability << "/" << maxDurability << endl;
    if (durability <= 0) {
        onBreak();
    }
}

void Axe::sound() {
    cout << "Thwack! Thwack! Thwack!" << endl;
}

void Axe::onBreak() {
    cout << "The axe handle snaps!" << endl;
}

// ---------- Shovel ----------
Shovel::Shovel() : Tool() {}

Shovel::Shovel(int durability_, int maxDurability_, string material_, string name_, int damage_, int miningSpeed_)
    : Tool(durability_, maxDurability_, material_, name_, damage_, miningSpeed_) {}

void Shovel::use() {
    if (durability <= 0) {
        cout << "The " << name << " shovel is broken!" << endl;
        return;
    }
    durability--;
    cout << "Digging dirt with " << name << " shovel. Durability: " << durability << "/" << maxDurability << endl;
    if (durability <= 0) {
        onBreak();
    }
}

void Shovel::sound() {
    cout << "Schff! Schff! Schff!" << endl;
}

void Shovel::onBreak() {
    cout << "The shovel blade cracks!" << endl;
}

// ---------- Sword ----------
Sword::Sword() : Tool() {}

Sword::Sword(int durability_, int maxDurability_, string material_, string name_, int damage_, int miningSpeed_)
    : Tool(durability_, maxDurability_, material_, name_, damage_, miningSpeed_) {}

void Sword::use() {
    if (durability <= 0) {
        cout << "The " << name << " sword is broken!" << endl;
        return;
    }
    durability--;
    cout << "Attacking with " << name << " sword, dealing " << damage << " damage. Durability: " << durability << "/" << maxDurability << endl;
    if (durability <= 0) {
        onBreak();
    }
}

void Sword::sound() {
    cout << "Whoosh! Slash!" << endl;
}

void Sword::onBreak() {
    cout << "The sword blade shatters!" << endl;
}

// ---------- Hoe ----------
Hoe::Hoe() : Tool() {}

Hoe::Hoe(int durability_, int maxDurability_, string material_, string name_, int damage_, int miningSpeed_)
    : Tool(durability_, maxDurability_, material_, name_, damage_, miningSpeed_) {}

void Hoe::use() {
    if (durability <= 0) {
        cout << "The " << name << " hoe is broken!" << endl;
        return;
    }
    durability--;
    cout << "Tilling soil with " << name << " hoe. Durability: " << durability << "/" << maxDurability << endl;
    if (durability <= 0) {
        onBreak();
    }
}

void Hoe::sound() {
    cout << "Scrape! Scrape! Scrape!" << endl;
}

void Hoe::onBreak() {
    cout << "The hoe bends and breaks!" << endl;
}