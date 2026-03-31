#include "Weapon.cpp"
#include "Character.cpp"

int main()
{
    Weapon woodSword;
    Weapon magicStick("Bâton de magie", 30, 80);
    //woodSword.display();
    //magicStick.display();

    Character yennefer("Yennefer", 80, 100, magicStick);
    Character geralt("Geralt", 100, 50, woodSword);
    yennefer.display();
    geralt.display();
    yennefer.attack(geralt);
    geralt.display();
    geralt.takeLifePotion(15);
    printf("Geralt utilise une potion de vie !\n");
    geralt.display();
    geralt.attack(yennefer);
    yennefer.display();

    return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            