/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:46:31 by mki               #+#    #+#             */
/*   Updated: 2021/08/07 07:41:14 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat Constructor" << std::endl;
}

Cat::Cat(const Cat &c)
{
    Cat::operator=(c);
    std::cout << "Cat Copy Constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
    _type = c._type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor" << std::endl;
}

std::string Cat::getType() const
{
    return (_type);
}

void Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}
