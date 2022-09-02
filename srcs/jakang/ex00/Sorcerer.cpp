/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 17:53:55 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 13:16:47 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& ref)
{
    *this = ref;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& ref)
{
    this->_name = ref._name;
    this->_title = ref._title;
	return (*this);
}

std::string Sorcerer::getName()
{
	return (this->_name);
}

std::string Sorcerer::getTitle()
{
	return (this->_title);
}

std::string Sorcerer::introduce()
{
	return ("I am " + this->getName() + ", " + this->getTitle()
	+ ", and I like ponies!");
}

void Sorcerer::polymorph(Victim const & victim) const
{
	victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream &out, Sorcerer &sorcerer)
{
	out << sorcerer.introduce() << std::endl;
	return (out);
}
