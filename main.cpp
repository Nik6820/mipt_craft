#include "instruments.h"
#include <iostream>
#include "mob.h"
#include "neutral_mob.h"
#include "hostile_mob.h"
#include "zombie.h"
#include "spider.h"
#include "skeleton.h"
#include "cow.h"
#include "sheep.h"
#include "chicken.h"
#include "edible.h"


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

    std::cout << "\n=== FOOD TEST ===" << std::endl;
    golden_apple god_apple(4, 9.6f, "Enchanted Golden Apple", 1, true);
    god_apple.eat();

    cooked_beef steak(8, 12.8f, "Steak", 5);
    steak.eat();

    suspicious_stew weird_stew(6, 7.2f, "Suspicious Stew", 3, "Night Vision", 5);
    weird_stew.eat();

    std::cout << "\n=== POTION TEST ===" << std::endl;
    healing_potion health_potion("Healing", "Instant Health", 1, 1, true, false);
    health_potion.drink();
    health_potion.splash();

    strength_potion strong_potion("Strength", "Strength", 3600, 1, false, false);
    strong_potion.drink();

    invisibility_potion invis_potion("Invisibility", "Invisibility", 6000, 0, false, true);
    invis_potion.drink();
    invis_potion.linger();

    zombie Frank(50, 2, 3, "Frank", 5);
    Frank.mob_sound();

    spider Bob(20, 4, 1, "Bob", 2);
    Bob.mob_sound();

    skeleton Nikitos(35, 2, 3, "Nikitos", 4);
    Nikitos.mob_sound();

    cow Anton(40, 3, 3, "Anton");
    cout << Anton.get_speed() << endl;
    Anton.get_milked();
    cout << Anton.get_speed() << endl;
    cout << Anton.get_hp() << endl;




    return 0;
}	
