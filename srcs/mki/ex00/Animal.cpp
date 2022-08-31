/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:45:39 by mki               #+#    #+#             */
/*   Updated: 2021/08/07 07:39:54 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    _type = "Empty";
    std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(const Animal &a)
{
    Animal::operator=(a);
    std::cout << "Animal Copy Constructor" << std::endl;
}

Animal &Animal::operator=(const Animal &a)
{
    _type = a._type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor" << std::endl;
}

std::string Animal::getType() const
{
    return (_type);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
