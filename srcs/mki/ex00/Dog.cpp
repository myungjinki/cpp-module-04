/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:49:01 by mki               #+#    #+#             */
/*   Updated: 2021/08/07 07:40:19 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog &d)
{
    Dog::operator=(d);
    std::cout << "Dog Copy Constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &d)
{
    _type = d._type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

std::string Dog::getType() const
{
    return (_type);
}

void Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}
