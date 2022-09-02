/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 20:18:20 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 20:25:34 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type): _xp(0), _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria& ref)
{
    *this = ref;
}

AMateria::~AMateria()
{
	return ;
}

AMateria& AMateria::operator=(const AMateria& ref)
{
	(void)ref;
    return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
