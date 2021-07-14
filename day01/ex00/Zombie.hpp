#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__
#include<iostream>
#include<string>
#include <iostream>
#include <cstdlib>

class Zombie {
    private:
    std::string name;

    public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
    void setname(std::string name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif