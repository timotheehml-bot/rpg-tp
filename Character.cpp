#include "Character.hpp"

Character::Character()
{
    name = "name";
    life = 100;
    mana = 100;
}

Character::Character(string newName, int newLife, int newMana, Weapon newEquipedWeapon)
{
    name = newName;
    life = newLife;
    mana = newMana;
    equipedWeapon = newEquipedWeapon;
}
void Character::receiveDamages(int damages)
{
    life -= damages;
    if (life < 0)
    {
        life = 0;
    }
}

void Character::attack(Character &target)
{
    cout << name << " attaque " << target.name
         << " pour " << equipedWeapon.getDamages() << " dégâts !" << endl;
    target.receiveDamages(equipedWeapon.getDamages());
}

void Character::takeLifePotion(int lifePoints)
{
    life += lifePoints;
    if (life > 100)
    {
        life = 100;
    }
}

void Character::switchWeapon(string weaponName, int weaponDamages)
{

    equipedWeapon.update(weaponName, weaponDamages);
}

bool Character::isAlive()
{
    return life > 0;
}

void Character::display()
{
    cout << "Nom : " << name << " | Vie : " << life << " | Mana : " << mana << endl;
    //equipedWeapon.display();
}
Character::~Character()
{
}