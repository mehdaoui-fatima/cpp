/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:22:37 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/07/15 14:59:32 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string name = "HI THIS IS BRAIN";
    std::string* stringPTR =  &name;
    std::string& stringREF =  name;
    
    std::cout << &name <<std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    
}