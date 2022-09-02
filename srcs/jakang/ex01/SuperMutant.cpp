/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 11:12:30 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 16:19:53 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant& ref): Enemy(ref)
{
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant& SuperMutant::operator=(const SuperMutant& ref)
{
    Enemy::operator=(ref);
    return (*this);
}

void    SuperMutant::takeDamage(int damage)
{
	if (this->getHP() > 0 && damage > 3)
		this->setHP(this->getHP() - damage + 3);
	return ;
}