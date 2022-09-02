/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 14:07:33 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 20:33:10 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure& ref): AMateria("cure")
{
    this->_xp = ref._xp;
}

Cure::~Cure()
{
	return ;
}

Cure& Cure::operator=(const Cure& ref)
{
    this->_xp = ref._xp;
	this->_type = ref._type;
    return (*this);
}

AMateria* Cure::clone() const
{
	Cure *t = new Cure(*this);
	return (t);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
