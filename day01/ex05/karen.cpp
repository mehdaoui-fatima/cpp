/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:56:57 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/28 14:34:06 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Karen.hpp"


void Karen::debug(void){
    
    std::cout << "I love to get extra bacon for my";
    std::cout << "my 7XL-double-cheese-triple-pickle-special-ketchup burger. ";
    std::cout << "I just love it!";
}

void Karen::info(void){

    std::cout << "I cannot believe adding extra bacon cost more money. ";
    std::cout << "You don’t put enough!";
    std::cout << "! If you did I would not have to ask for it!";
}

void Karen::warning(void){
    
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming here for years and ";
    std::cout << "you just started working here last month.";
}

void Karen::error(void){
    std::cout << "This is unacceptable, I want to speak to the manager now.";
}

void complain(std::string level){
    
}