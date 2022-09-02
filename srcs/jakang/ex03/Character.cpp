/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 14:07:17 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 20:28:49 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
    int     i;

    i = -1;
    while(++i < 4)
        this->_inventory[i] = 0;
}

Character::Character(const Character& ref): _name(ref.getName())
{
    int     i;

    i = -1;
    while(++i < 4)
    {
        if (ref._inventory[i] == 0)
            this->_inventory[i] = 0;
        else
            this->_inventory[i]  = ref._inventory[i]->clone();
    }
}

Character::~Character()
{
    return ;
}

Character& Character::operator=(const Character& ref)
{
    int     i;

    i = -1;
    while(++i < 4)
    {
        if (ref._inventory[i] == 0)
            this->_inventory[i] = 0;
        else
            this->_inventory[i]  = ref._inventory[i]->clone();
    }
    this->_name = ref.getName();
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    int     i;

    i = -1;
    while(++i < 4)
    {   
        if (this->_inventory[i] == 0)
        {
            this->_inventory[i] = m;
            return ;
        }
    }
    std::cout << "No more space" << std::endl;
}

void Character::unequip(int idx)
{
    this->_inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (this->_inventory[idx] == 0)
        std::cout << "Empty space" << std::endl;
    else
        this->_inventory[idx]->use(target);
}