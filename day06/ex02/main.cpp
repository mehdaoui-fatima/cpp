/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 17:08:53 by fmehdaou          #+#    #+#             */
/*   Updated: 2021/10/01 18:08:27 by fmehdaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "BaseA.hpp"
#include "BaseB.hpp"
#include "BaseC.hpp"
#include <cstdlib>

Base* generate(void)
{
    int x;
    Base *ptr[] = {new BaseA(), new BaseB(), new BaseC()};
    srand(time(0));
    x = rand() % 3 + 1;
    std::cout << x << std::endl;
    return ptr[x];
}

void identify(Base* p)
{
    BaseA *pA = dynamic_cast<BaseA*>(p);
    BaseB *pB = dynamic_cast<BaseB*>(p);
    BaseC *pC = dynamic_cast<BaseC*>(p);
    
    if (pA == nullptr && pB == nullptr)
        std::cout << "C" << std::endl;
    else if (pA == nullptr && pC == nullptr)
        std::cout << "B" << std::endl;
    else if (pC == nullptr && pB == nullptr)
        std::cout << "A" << std::endl;
}

void identify(Base& p)
{
    BaseA pA = dynamic_cast<BaseA&>(p);
    BaseB pB = dynamic_cast<BaseB&>(p);
    BaseC pC = dynamic_cast<BaseC&>(p);
    
    if (&pA == nullptr && &pB == nullptr)
        std::cout << "C" << std::endl;
    else if (&pA == nullptr && &pC == nullptr)
        std::cout << "B" << std::endl;
    else if (&pC == nullptr && &pB == nullptr)
        std::cout << "A" << std::endl;
}

int main()
{
    Base *p;

    p = generate();
    identify(p);
    return (0);
}