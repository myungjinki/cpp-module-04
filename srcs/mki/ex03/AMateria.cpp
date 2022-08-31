/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 00:57:37 by mki               #+#    #+#             */
/*   Updated: 2021/08/09 18:50:28 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    _type = "Empty";
}
AMateria::AMateria(std::string const &type)
{
    _type = type;
}
AMateria::AMateria(const AMateria &a)
{
    AMateria::operator=(a);
}
AMateria &AMateria::operator=(const AMateria &a)
{
    if (this == &a)
    {
        return (*this);
    }
    _type = a._type;
    return *this;
}
AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}