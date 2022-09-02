/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:20:41 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 12:20:03 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
    _name = name;
    _title = title;
    std::cout << _name << ", "<< _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer & ref)
{
    *this = ref;
}

Sorcerer& Sorcerer::operator=(const Sorcerer & ref)
{
    if (this == &ref)
        return (*this); 
    _name = ref.getName();
    _title = ref.getTitle();
    std::cout << _name << ", "<< _title << ", is born!" << std::endl;
    return (*this);
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title 
        << ", is dead. Consequenced will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const
{
    return (_name);
}

std::string Sorcerer::getTitle() const
{
    return (_title);
}

void        Sorcerer::polymorph(Victim const & ref) const
{
    ref.getPolymorphed();
}

std::ostream& operator<<(std::ostream& os, const Sorcerer &ref)
{
    return (os << "I am " << ref.getName() << ", " 
        << ref.getTitle() << ", and I like ponies!") << std::endl;
}