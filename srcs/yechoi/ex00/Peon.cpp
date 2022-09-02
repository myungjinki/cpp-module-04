/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:11:08 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 12:55:07 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
    : Victim()
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name)
    : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon & ref)
    : Victim(ref)
{
}
        
Peon& Peon::operator=(const Peon & ref)
{
    if (this == &ref)
        return (*this);
    _name = ref.getName();
    std::cout << "Zog zog." << std::endl;
    return (*this);
}

Peon::~Peon()
{
    std::cout << "Blueark..." << std::endl;
}

void    Peon::getPolymorphed() const
{
    std::cout << getName() 
        << " has been turned into a pink pony!" << std::endl;
}