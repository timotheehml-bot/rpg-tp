#pragma once
#include <iostream>

using namespace std;

class Weapon
{
private:
    string name;
    int damages;
    int size;

public:
    Weapon();
    Weapon(string newName, int newDamages, int newSize);
    void update(string newName, int newDamages);
    void display();
    int getDamages() const;
    ~Weapon();
};