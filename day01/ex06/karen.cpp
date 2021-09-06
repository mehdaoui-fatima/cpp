/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:30:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/29 12:02:16 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "karen.hpp"

void Karen::debug(void){
    
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my";
    std::cout << "my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!" << std::endl;
}

void Karen::info(void){

    std::cout << "\n[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! ";
    std::cout << "If you did I would not have to ask for it!" << std::endl; 
}

void Karen::warning(void){
    std::cout << "\n[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and ";
    std::cout << "you just started working here last month." << std::endl;
}

void Karen::error(void){
    std::cout << "\n[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int getLevel(std::string str)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++)
    {
        if (str == levels[i])
             return (i);    
    }
    return (-1);
}

void Karen::complain(std::string level){
    
    int n;
    
    n = getLevel(level);
    switch (n) {
        case 0:
            debug();
            info();
            warning();
            error();
            break;
        case 1:
            info();
            warning();
            error();
            break;
        case 2:
            warning();
            error();
            break;
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]";
    }
}

