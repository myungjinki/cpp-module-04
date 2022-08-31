/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 02:39:58 by mki               #+#    #+#             */
/*   Updated: 2021/08/09 18:39:49 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}
MateriaSource::MateriaSource(const MateriaSource &a)
{
    *this = a;

    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
        {
            delete this->_inventory[i];
            this->_inventory[i] = a._inventory[i]->clone();
        }
        else
            this->_inventory[i] = NULL;
    }
}
MateriaSource &MateriaSource::operator=(const MateriaSource &a)
{
    if (this == &a)
        return (*this);
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
            delete this->_inventory[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (a._inventory[i] != NULL)
            this->_inventory[i] = a._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    return (*this);
}
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
    }
}
void MateriaSource::learnMateria(AMateria *a)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = a;
            return;
        }
    }
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i] != NULL && this->_inventory[i]->getType() == type)
            return (this->_inventory[i]->clone());
    }
    return (0);
}