/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 14:12:04 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 10:59:24 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name)
{
    _inventory[0] = 0;
    _inventory[1] = 0;
    _inventory[2] = 0;
    _inventory[3] = 0;
    _name = name;
}

Character::Character(const Character & ref)
{
    *this = ref;
}

Character& Character::operator=(const Character & ref)
{
    if (this == &ref)
        return (*this);
    _name = ref.getName();
    for (int i = 0 ; i < 4; i++)
        _inventory[i] = ref._inventory[i];
    return (*this);
}

std::string const & Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria * m)
{
    for (int i = 0 ; i < 4 ; i++)
    {
        if (_inventory[i] == 0)
        {
            _inventory[i] = m;
            std::cout << m->getType() <<  
                " successfully equiped!" << std::endl;
            return;
        }
    }
    return; 
}

void Character::unequip(int idx)
{
    if (idx >= 4 || _inventory[idx] == 0)
        return;
    _inventory[idx] = 0;
}

void Character::use(int idx, ICharacter & target)
{
    if (idx < 0 || idx >= 4 || _inventory[idx] == 0)
        return;
    _inventory[idx]->use(target);
}