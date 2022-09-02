/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 10:52:21 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 15:08:54 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy(const Enemy& ref)
{
    *this = ref;
}

Enemy::~Enemy()
{
	return ;
}

Enemy& Enemy::operator=(const Enemy& ref)
{
    this->_hp = ref._hp;
    this->_type = ref._type;
    return (*this);
}

std::string Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return (this->_hp);   
}

void Enemy::setHP(int hp)
{
	this->_hp = hp;
	return ;  
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
	{
		if (_hp - damage >= 0)
			this->_hp -= damage;
		else
			this->_hp = 0;
	}	
	return ;
}