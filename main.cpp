#include "instruments.h"
#include <iostream>

using namespace std;

int main() {
    // Создаём инструменты
    Pickaxe diamondPick(1561, 1561, "diamond", "Diamond Pickaxe", 5, 8);
    Axe ironAxe(250, 250, "iron", "Iron Axe", 7, 6);
    Shovel stoneShovel(131, 131, "stone", "Stone Shovel", 2, 4);
    Sword woodenSword(59, 59, "wood", "Wooden Sword", 4, 2);
    Hoe goldHoe(32, 32, "gold", "Golden Hoe", 1, 12);

    cout << "\n--- Testing tools ---\n" << endl;

    // Используем инструменты
    diamondPick.use();
    diamondPick.sound();

    ironAxe.use();
    ironAxe.sound();

    stoneShovel.use();
    stoneShovel.sound();

    woodenSword.use();
    woodenSword.sound();

    goldHoe.use();
    goldHoe.sound();

    cout << "\n--- Repair and enchant ---\n" << endl;

    // Ремонт и зачарование
    ironAxe.repair(50);
    diamondPick.enchant(2, 3);

    cout << "\n--- Breaking a tool ---\n" << endl;

    // Доведём до поломки деревянный меч
    for (int i = 0; i < 60; ++i) {
        woodenSword.use();
    }

    cout << "\n--- Final stats ---\n" << endl;
    cout << diamondPick.getName() << " durability: " << diamondPick.getDurability() << "/" << diamondPick.getMaxDurability() << endl;
    cout << ironAxe.getName() << " durability: " << ironAxe.getDurability() << "/" << ironAxe.getMaxDurability() << endl;
    cout << stoneShovel.getName() << " durability: " << stoneShovel.getDurability() << "/" << stoneShovel.getMaxDurability() << endl;
    cout << woodenSword.getName() << " durability: " << woodenSword.getDurability() << "/" << woodenSword.getMaxDurability() << endl;
    cout << goldHoe.getName() << " durability: " << goldHoe.getDurability() << "/" << goldHoe.getMaxDurability() << endl;

    return 0;
}