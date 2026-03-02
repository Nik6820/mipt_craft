#include "edible.h"

// ========== FOOD IMPLEMENTATION ==========

// food class
food::food(int hunger_, float saturation_, std::string name_, int quantity_) :
    hunger_restore(hunger_), saturation_restore(saturation_), name(name_), quantity(quantity_) {
    std::cout << name << " has been created" << std::endl;
}

food::food() {
    std::cout << "Dude minecraft is not sandbox, ts does not exist *crying emoji" << std::endl;
}

food::~food() {}

void food::eat() {
    std::cout << "Eating " << name << ". Restores " << hunger_restore << " hunger and " << saturation_restore << " saturation" << std::endl;
    quantity--;
    if (quantity <= 0) {
        std::cout << "You've eaten a(n) " << name << "." << std::endl;
    }
}

void food::get_effect() {
    std::cout << "Sucks to suck" << std::endl;
}

void food::stack(int amount) {
    quantity += amount;
    if (quantity > 64){
        std::cout << "Bro, " << quantity << "'s more than a stack, how did this happen???";
    } 
    std::cout << "Now you have " << quantity << " " << name << "(s)" << std::endl;
}

std::string food::get_name() {
    return name;
}

int food::get_quantity() {
    return quantity;
}

// golden_apple class
golden_apple::golden_apple() : food() {}

golden_apple::golden_apple(int hunger_, float saturation_, std::string name_, int quantity_, bool enchanted_) :
    food(hunger_, saturation_, name_, quantity_), is_enchanted(enchanted_) {}

void golden_apple::get_effect() {
    if (is_enchanted) {
        std::cout << "Grants: Regeneration II (30s), Absorption IV (2m), Resistance (5m), Fire Resistance (5m)" << std::endl;
    } else {
        std::cout << "Grants: Regeneration II (5s), Absorption (2m)" << std::endl;
    }
}

void golden_apple::eat() {
    food::eat();
    get_effect();
}

// cooked_beef class
cooked_beef::cooked_beef() : food() {}

cooked_beef::cooked_beef(int hunger_, float saturation_, std::string name_, int quantity_) :
    food(hunger_, saturation_, name_, quantity_) {}

void cooked_beef::eat() {
    food::eat();
    std::cout << "лаваш говядина" << std::endl;
}

// suspicious_stew class
suspicious_stew::suspicious_stew() : food() {}

suspicious_stew::suspicious_stew(int hunger_, float saturation_, std::string name_, int quantity_, std::string effect_, int duration_) :
    food(hunger_, saturation_, name_, quantity_), effect_type(effect_), effect_duration(duration_) {}

void suspicious_stew::get_effect() {
    std::cout << "Grants: " << effect_type << " for " << effect_duration << " seconds" << std::endl;
}

void suspicious_stew::eat() {
    food::eat();
    get_effect();
}

// ========== POTION IMPLEMENTATION ==========

// potion class
potion::potion(std::string name_, std::string effect_, int duration_, int amplifier_, bool splash_, bool lingering_) :
    name(name_), effect(effect_), duration(duration_), amplifier(amplifier_), is_splash(splash_), is_lingering(lingering_) {
    std::cout << "Potion of " << name << " has been brewed" << std::endl;
}

potion::potion() {
    std::cout << "Awkward potion has been created" << std::endl;
}

potion::~potion() {}

void potion::drink() {
    std::cout << "Drinking potion of " << name << ". Effect: " << effect << " " << amplifier+1 << " for " << duration/20 << " seconds" << std::endl;
}

void potion::apply_effect() {
    std::cout << "Applied " << effect << " " << amplifier+1 << " to target" << std::endl;
}

void potion::splash() {
    if (is_splash) {
        std::cout << "Splash potion of " << name << " explodes!" << std::endl;
        apply_effect();
    } else {
        std::cout << "This potion cannot be splashed" << std::endl;
    }
}

void potion::linger() {
    if (is_lingering) {
        std::cout << "Lingering potion of " << name << " creates an area effect cloud!" << std::endl;
    } else {
        std::cout << "This potion cannot be lingered" << std::endl;
    }
}

std::string potion::get_name() {
    return name;
}

// healing_potion class
healing_potion::healing_potion() : potion() {}

healing_potion::healing_potion(std::string name_, std::string effect_, int duration_, int amplifier_, bool splash_, bool lingering_) :
    potion(name_, effect_, duration_, amplifier_, splash_, lingering_) {}

void healing_potion::apply_effect() {
    std::cout << "Heals " << 2 * (amplifier + 1) << " hearts of health" << std::endl;
}

void healing_potion::drink() {
    potion::drink();
    apply_effect();
}

// strength_potion class
strength_potion::strength_potion() : potion() {}

strength_potion::strength_potion(std::string name_, std::string effect_, int duration_, int amplifier_, bool splash_, bool lingering_) :
    potion(name_, effect_, duration_, amplifier_, splash_, lingering_) {}

void strength_potion::apply_effect() {
    std::cout << "Increases melee damage by " << 3 * (amplifier + 1) << " points" << std::endl;
}

void strength_potion::drink() {
    potion::drink();
    std::cout << "You feel stronger!" << std::endl;
}

// invisibility_potion class
invisibility_potion::invisibility_potion() : potion() {}

invisibility_potion::invisibility_potion(std::string name_, std::string effect_, int duration_, int amplifier_, bool splash_, bool lingering_) :
    potion(name_, effect_, duration_, amplifier_, splash_, lingering_) {}

void invisibility_potion::apply_effect() {
    std::cout << "Bro what have you done bro, you're supposed to make yourself invisible, not your enemies..." << std::endl;
}

void invisibility_potion::drink() {
    potion::drink();
    std::cout << "You disappear from sight!" << std::endl;
}
