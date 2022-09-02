/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 13:46:43 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 10:59:05 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
    : AMateria("ice")
{
}

Ice::Ice(const Ice& ref)
    : AMateria(ref)
{
}

Ice& Ice::operator=(const Ice& ref)
{
    if (this == &ref)
        return (*this);
    _xp = ref.getXP();
    _type = ref.getType();
    return (*this);
}

Ice::~Ice()
{
}

AMateria*   Ice::clone() const
{
    AMateria *copy = new Ice(*this);
    return (copy);
}

void        Ice::use(ICharacter& target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << 
        target.getName() << " *" << std::endl;
}