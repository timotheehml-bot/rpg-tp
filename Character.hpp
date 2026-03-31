#pragma once
#include <iostream>
#include "Weapon.hpp"

using namespace std;

class Character
{
private:
    string name;
    int life;
    int mana;
    Weapon equipedWeapon; 

public:
    Character();
    Character(string newName, int newLife, int newMana, Weapon newEquipedWeapon);
    void receiveDamages(int damages);
    void attack(Character &target);
    void takeLifePotion(int lifePoints);
    void switchWeapon(string weaponName, int weaponDamages);
    bool isAlive();
    void display();
    ~Character();
};