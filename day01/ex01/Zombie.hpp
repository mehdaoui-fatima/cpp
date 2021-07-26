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
    Zombie(void);
    ~Zombie(void);
    void announce(void);
    void setName(std::string name);
    std::string getName(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif