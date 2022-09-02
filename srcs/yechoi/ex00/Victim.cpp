/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:11:19 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 12:55:38 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
    _name = "Random";
    std::cout << "Some random victim called " << _name
        << " just appeared!" << std::endl;
}

Victim::Victim(std::string name)
{
    _name = name;
    std::cout << "Some random victim called " << _name
        << " just appeared!" << std::endl;
}

Victim::Victim(const Victim & ref)
{
    *this = ref;
}

Victim& Victim::operator=(const Victim & ref)
{
    if (this == &ref)
        return (*this);
    _name = ref.getName();
    std::cout << "Some random victim called " << _name
        << " just appeared!" << std::endl;
    return (*this);
}

Victim::~Victim()
{
    std::cout << "Victim " << _name <<
        " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
    return (_name);
}

void        Victim::getPolymorphed() const
{
    std::cout << getName() 
        << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Victim &ref)
{
    return (os << "I am " << ref.getName() 
        << " and I like otters!") << std::endl ;
}