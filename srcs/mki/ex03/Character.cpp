/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 02:39:56 by mki               #+#    #+#             */
/*   Updated: 2021/08/12 15:18:17 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    _name = "Empty";
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
    }
}

Character::Character(std::string &name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
    }
}

Character::Character(const Character &a)
{
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
    }
    Character::operator=(a);
}

Character &Character::operator=(const Character &a)
{
    if (this == &a)
        return (*this);
    this->_name = a._name;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (a._inventory[i] != NULL)
        {
            this->_inventory[i] = a._inventory[i]->clone();
            std::cout << a._inventory[i] << "   " << _inventory << std::endl;
        }
        else
        {
            this->_inventory[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] != NULL)
        {
            delete _inventory[i];
        }
    }
}

std::string const &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    int i;

    i = 0;
    while (i < 4 && this->_inventory[i] != NULL)
        i++;
    if (i == 4)
        return;
    this->_inventory[i] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
        return;
    else
        this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
        return;
    else
        this->_inventory[idx]->use(target);
}
