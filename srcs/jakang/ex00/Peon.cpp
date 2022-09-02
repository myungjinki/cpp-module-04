/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 17:53:51 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 14:57:49 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name): Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(const Peon& ref): Victim(ref)
{
    std::cout << "Zog zog." << std::endl; 
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon& Peon::operator=(const Peon& ref)
{
    Victim::operator=(ref);
    return (*this);
}

void    Peon::getPolymorphed() const
{
	std::cout << this->getName()
	<< " has been turned into a pink pony!" << std::endl;
}