/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:13:45 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 15:34:24 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
    : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & ref)
    : AWeapon(ref)
{
}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle & ref)
{
    if (this == &ref)
        return (*this);
    _name = ref.getName();
    _APCost = ref.getAPCost();
    _damagePoint = ref.getDamage();
    return (*this);
}

PlasmaRifle::~PlasmaRifle()
{
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}