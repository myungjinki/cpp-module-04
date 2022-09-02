/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:42:02 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 10:59:00 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
    : AMateria("cure")
{
}

Cure::Cure(const Cure& ref)
    : AMateria(ref)
{
}

Cure& Cure::operator=(const Cure& ref)
{
    if (this == &ref)
        return (*this);
    _xp = ref.getXP();
    _type = ref.getType();
    return (*this);
}

Cure::~Cure()
{
}

AMateria*   Cure::clone() const
{
    AMateria *copy = new Cure(*this);
    return (copy);
}

void        Cure::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* heals " << target.getName() 
        << "’s wounds *" << std::endl;
}