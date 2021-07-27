#include "HumanA.hpp"


HumanA::HumanA(std::string name_v, Weapon &weapon_v) : name(name_v), weapon(weapon_v)
{}

void HumanA::attack()
{
    std::cout << this->name << " attacks with his " << weapon.getType() << std::endl; 
}

