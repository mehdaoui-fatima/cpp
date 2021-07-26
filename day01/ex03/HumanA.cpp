#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << weapon.getType(); 
}

void    HumanA::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

HumanA::HumanA(std::string name, Weapon weapon) : name(name), weapon(weapon) {}