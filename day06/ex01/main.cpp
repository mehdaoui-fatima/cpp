/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 16:06:44 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/01 17:06:01 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdint>

typedef struct Data_t {
	std::string name;
	int x;
	int y;
} Data;

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw)); 
}

int main()
{
	Data point;
	point.x = 10;
	point.y = 5;
	point.name = "M";

	std::cout << &point << std::endl; 
	std::cout << deserialize(serialize(&point)) << std::endl;
    return (0);
}