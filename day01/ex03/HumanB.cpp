#include "HumanB.hpp"

HumanB::HumanB(std::string name) 
{
    this->name = name;
}

void HumanB::attack(){
    
    std::cout << this->name << " attacks with his " << weapon->getType() << std::endl; 
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

