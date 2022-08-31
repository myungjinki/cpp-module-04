/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 01:16:17 by mki               #+#    #+#             */
/*   Updated: 2021/08/09 18:31:44 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    _type = "ice";
}

Ice::Ice(std::string const &type)
{
    _type = type;
}

Ice::Ice(const Ice &a)
{
    Ice::operator=(a);
}

Ice &Ice::operator=(const Ice &a)
{
    if (this == &a)
    {
        return (*this);
    }
    _type = a._type;
    return (*this);
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
    AMateria *ice = new Ice;
    return ice;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
