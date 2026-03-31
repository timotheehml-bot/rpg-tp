#include "Weapon.hpp"

Weapon::Weapon()
{
    name = "Épée en bois";
    damages = 10;
    size = 50;
}

Weapon::Weapon(string newName, int newDamages, int newSize)
{
    name = newName;
    damages = newDamages;
    size = newSize;
}

void Weapon::update(string newName, int newDamages)
{
    name = newName;
    damages = newDamages;
}

void Weapon::display()
{
    cout << "Arme : " << name << " | Dégâts : " << damages << " | Taille : " << size << endl;
}

int Weapon::getDamages() const
{
    return damages;
}

Weapon::~Weapon()
{
}