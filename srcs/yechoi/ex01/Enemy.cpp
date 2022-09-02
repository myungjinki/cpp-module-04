/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:13:14 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 11:09:43 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
    :_hitPoint(hp), _type(type)
{
}

Enemy::Enemy(const Enemy &ref)
{
    *this = ref;
}

Enemy& Enemy::operator=(const Enemy & ref)
{
    if (this == &ref)
        return (*this);
    _hitPoint = ref.getHP();
    _type = ref.getType();
    return (*this);
}

Enemy::~Enemy()
{
}

std::string     Enemy::getType() const
{
    return (_type);
}

int             Enemy::getHP() const
{
    return (_hitPoint);
}

void            Enemy::takeDamage(int damage)
{
    _hitPoint -= damage;
    if (_hitPoint < 0)
        _hitPoint = 0;
}