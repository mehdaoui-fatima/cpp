#include "HumanB.hpp"

HumanB::HumanB(void){}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

void HumanB::attack(){

    std::cout << this->name << " attacks with his " << weapon.getType(); 

}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

