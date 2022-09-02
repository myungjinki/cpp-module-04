/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:59:31 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 15:33:56 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
    : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist & ref)
    : AWeapon(ref)
{
}

PowerFist& PowerFist::operator=(const PowerFist & ref)
{
    if (this == &ref)
        return (*this);
    _name = ref.getName();
    _APCost = ref.getAPCost();
    _damagePoint = ref.getDamage();
    return (*this);
}

PowerFist::~PowerFist()
{
}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}