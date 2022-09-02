/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:01:55 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 10:55:32 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    _inventory[0] = 0;
    _inventory[1] = 0;
    _inventory[2] = 0;
    _inventory[3] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
    *this = ref;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& ref)
{
    if (this == &ref)
        return (*this);
    for (int i = 0 ; i < 4; i++)
        _inventory[i] = ref._inventory[i];
    return (*this);
}

void        MateriaSource::learnMateria(AMateria* m)
{
    int i;
    
    for (i = 0; i < 4; i++)
    {
        if (_inventory[i] == 0)
        {
            _inventory[i] = m;
            std::cout<< "Successfully learned materia!" << std::endl;
            break;
        }
    }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i]->getType() == type)
        {
            std::cout << _inventory[i]->getType()
                << " was created!" << std::endl;
            return (_inventory[i]->clone());
        }
    }
    return (0);
}