/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 20:42:11 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 17:26:49 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void): _count(0), _units(NULL)
{
	return ;
}

Squad::Squad(const Squad& ref): _count(ref.getCount())
{
	int		i;

    this->_units = new ISpaceMarine*[ref.getCount()];
	i = -1;
    while (++i < ref.getCount())
        this->_units[i] = ref.getUnit(i)->clone();
}

Squad::~Squad(void)
{
	int		i;

	if (this->_units != NULL)
    {
		i = -1;
		while (++i < this->getCount())
            delete this->_units[i];
        delete[] this->_units;
    }
}

Squad& Squad::operator=(const Squad& ref)
{
	int		i;

	if (this->_units != NULL)
    {
		i = -1;
		while (++i < this->getCount())
            delete this->_units[i];
        delete[] this->_units;
    }

	this->_count = ref.getCount();
    this->_units = new ISpaceMarine*[ref.getCount()];
	i = -1;
    while (++i < ref.getCount())
        this->_units[i] = ref.getUnit(i)->clone();
    return (*this);
}

int Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine* Squad::getUnit(int nth) const
{
    if (nth >= 0 && nth < this->_count)
        return (_units[nth]);
    else
        return (NULL);
}

int Squad::push(ISpaceMarine* marine)
{
	int		i;

    if(this->_units != NULL)
    {
        ISpaceMarine** nunits = new ISpaceMarine*[this->_count + 1];
		i = -1;
        while (++i < this->_count)
            nunits[i] = this->_units[i];
        nunits[this->_count] = marine;
        delete[] this->_units;
        this->_units = nunits;
    }
    else
    {
        this->_units = new ISpaceMarine*[1];
        this->_units[0] = marine;
    }
    this->_count += 1;    
    return (this->_count);
}
