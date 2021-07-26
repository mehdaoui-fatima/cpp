/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 15:53:06 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/14 17:46:30 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    this->name =  name;
};

Zombie::~Zombie(void){
    std::cout << "Zombie destroyed : " << this->name <<std::endl;
}

void Zombie::announce(void){
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." <<std::endl;
}
