/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:03:22 by yechoi            #+#    #+#             */
/*   Updated: 2021/01/26 23:29:06 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    _num = 0;
    _list = NULL;
}

Squad::Squad(const Squad &ref)
{
    *this = ref;
}

Squad& Squad::operator=(const Squad &ref)
{
    t_list  *curr;
    t_list  *next;

    if (this == &ref)   
        return (*this);
    curr = this->_list;
    while (curr)
    {
        next = curr->_next;
        delete curr->_unit;
        delete curr;
        curr = next;
    }
    this->~Squad();
    for (int i = 0 ; i < ref.getCount(); i++)
        push(ref.getUnit(i)->clone());
    return (*this);
}

Squad::~Squad()
{
    t_list  *curr;
    t_list  *next;

    curr = this->_list;
    while (curr)
    {
        next = curr->_next;
        delete curr->_unit;
        delete curr;
        curr = next;
    }
}

int             Squad::getCount() const
{
    return (_num);
}


ISpaceMarine*   Squad::getUnit(int idx) const
{
    t_list *curr;

    if (idx >= getCount())
        return (NULL);   
    curr = _list;
    for(int i = 0 ; i < idx ; i++)
        curr = curr->_next;
    return (curr->_unit);
}

int             Squad::push(ISpaceMarine* marine)
{
    t_list  *curr;
    t_list  *newMarine;

    newMarine = new t_list;
    newMarine->_unit = marine;
    newMarine->_next = NULL;
    curr = _list;
    if (!curr)
    {
        _list = newMarine;
        _num++;
        return (0);
    }
    while (curr->_next)
        curr = curr->_next;
    curr->_next = newMarine;
    _num++;
    return (_num);
}