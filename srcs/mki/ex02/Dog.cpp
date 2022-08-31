/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:49:01 by mki               #+#    #+#             */
/*   Updated: 2021/08/08 11:05:59 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor" << std::endl;
    _type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog &d)
{
    brain = new Brain();
    Dog::operator=(d);
    std::cout << "Dog Copy Constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &d)
{
    _type = d._type;
    for (int i = 0; i < IDEAS; i++)
    {
        brain->setIdea(i, d.brain->getIdea(i));
    }
    return (*this);
}

Dog::~Dog()
{
    delete brain;
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

Brain *Dog::getBrain()
{
    return brain;
}
