/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:58:04 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 15:34:03 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
    : _name(name), _damagePoint(damage), _APCost(apcost)
{
}

AWeapon::AWeapon(const AWeapon & ref)
{
    *this = ref;
}

AWeapon& AWeapon::operator=(const AWeapon & ref)
{
    _name = ref.getName();
    _APCost = ref.getAPCost();
    _damagePoint = ref.getDamage();
    return (*this);
}

AWeapon::~AWeapon()
{
}

std::string     AWeapon::getName() const
{
    return (_name);
}

int             AWeapon::getAPCost() const
{
    return (_APCost);
}

int             AWeapon::getDamage() const
{
    return (_damagePoint);
}