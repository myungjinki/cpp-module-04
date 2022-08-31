/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 01:11:43 by mki               #+#    #+#             */
/*   Updated: 2021/08/09 18:51:04 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    _type = "cure";
}

Cure::Cure(std::string const &type)
{
    _type = type;
}

Cure::Cure(const Cure &a)
{
    Cure::operator=(a);
}

Cure &Cure::operator=(const Cure &a)
{
    if (this == &a)
    {
        return (*this);
    }
    _type = a._type;
    return (*this);
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
    AMateria *cure = new Cure;
    return cure;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
