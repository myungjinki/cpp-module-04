/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 14:07:33 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 20:33:17 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice& ref): AMateria("ice")
{
    this->_xp = ref._xp;
}

Ice::~Ice()
{
	return ;
}

Ice& Ice::operator=(const Ice& ref)
{
    this->_xp = ref._xp;
	this->_type = ref._type;
    return (*this);
}

AMateria* Ice::clone() const
{
	Ice *t = new Ice(*this);
	return (t);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
