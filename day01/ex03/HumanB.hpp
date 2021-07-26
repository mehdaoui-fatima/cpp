#ifndef __HUMANB_H__
#define __HUMANB_H__
#include "Weapon.hpp"

class HumanB {

private:
    Weapon weapon;
    std::string name;

public:
    HumanB(void);
    HumanB(std::string name);
    void    attack();
    void    setWeapon(Weapon weapon);
};

#endif