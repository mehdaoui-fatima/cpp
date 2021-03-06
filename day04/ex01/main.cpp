/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:43:42 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/09/21 11:22:28 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main() 
{
    int sz = 2;
    Animal *animals[sz];

    for(int i = 0; i < sz; i++)
    {
        if (i % 2 == 0)
            animals[i] = new Cat();
        else
            animals[i] = new Dog();       
    }
    for(int i = 0; i < sz; i++)
       std::cout << animals[i]->getType() << std::endl;

    for (int i = 0; i < sz; i++)
        delete animals[i];
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
}