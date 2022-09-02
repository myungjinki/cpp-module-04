/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 10:46:31 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 15:02:05 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void): AWeapon("Power Fist", 50, 8)
{
	return ;
}

PowerFist::PowerFist(const PowerFist& ref): AWeapon(ref)
{
	return ;    
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist& PowerFist::operator=(const PowerFist& ref)
{
    AWeapon::operator=(ref);
    return (*this);
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
	return ;
}