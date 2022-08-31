/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 21:58:21 by mki               #+#    #+#             */
/*   Updated: 2021/08/08 00:40:14 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "Empty";
    std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
    WrongAnimal::operator=(a);
    std::cout << "WrongAnimal Copy Constructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &a)
{
    _type = a._type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor" << std::endl;
}

std::string WrongAnimal::getType() const
{
    std::cout << "WrongAnimal sound" << std::endl;
    return (_type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
