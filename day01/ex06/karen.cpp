/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:30:35 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/28 20:07:07 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "karen.hpp"

void Karen::debug(void){
    
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my";
    std::cout << "my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!";
}

void Karen::info(void){

    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! ";
    std::cout << "If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming here for years and ";
    std::cout << "you just started working here last month." << std::cout;
}

void Karen::error(void){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now.";
}

void Karen::karenFilter(int level){
    
    switch (level) {
        case 1:
            info();
            warning();
            break;
        case 2:
            debug();
            break;
        case 3:
            warning();
            break;
        case 4:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]";
    }
}

