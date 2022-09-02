/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:58:09 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 10:27:29 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const &type)
{
    _type = type;
    _xp = 0;
}

AMateria::AMateria(const AMateria &ref)
{
    *this = ref;
}

AMateria& AMateria::operator=(const AMateria &ref)
{
    if (this == &ref)
        return (*this);
    _type = ref.getType();
    _xp = ref.getXP();
    return (*this);
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType()const
{
    return (_type);
}

unsigned int        AMateria::getXP() const
{
    return (_xp);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    _xp += 10;
}