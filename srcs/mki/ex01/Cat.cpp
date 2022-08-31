/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:46:31 by mki               #+#    #+#             */
/*   Updated: 2021/08/08 11:05:53 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor" << std::endl;
    _type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &c)
{
    brain = new Brain();
    Cat::operator=(c);
    std::cout << "Cat Copy Constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &c)
{
    _type = c._type;
    for (int i = 0; i < IDEAS; i++)
    {
        brain->setIdea(i, c.brain->getIdea(i));
    }
    return (*this);
}

Cat::~Cat()
{
    delete brain;
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

Brain *Cat::getBrain()
{
    return brain;
}
