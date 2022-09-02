/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 17:53:59 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 13:15:43 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name): _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(const Victim& ref)
{
    *this = ref;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
	return ;
}

Victim& Victim::operator=(const Victim& ref)
{
    this->_name = ref._name;
    return (*this);
}

std::string Victim::getName() const
{
	return (this->_name);
}

std::string Victim::introduce()
{
	return ("I am " + this->getName() + " and I like otters!");
}

void	Victim::getPolymorphed() const
{
	std::cout << this->_name
	<< " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator<<(std::ostream &out, Victim &victim)
{
	out << victim.introduce() << std::endl;
	return (out);
}