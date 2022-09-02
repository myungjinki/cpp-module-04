/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:57:56 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 15:34:12 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name)
    : _name(name), _ap(40), _weapon(0)
{
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
    _ap = ref.getAP();
    _weapon = ref.getWeapon();
    return (*this);
}

Character::~Character()
{
}

void        Character::recoverAP()
{
    _ap += 10;
    if (_ap > 40)
        _ap = 40;
}
void        Character::equip(AWeapon* weapon)
{
    _weapon = weapon;
}

void        Character::attack(Enemy* enemy)
{
    if (_weapon == NULL || _ap < _weapon->getAPCost())        
        return;
    std::cout << _name << " attacks " << enemy->getType()
        << " with a " << _weapon->getName() << std::endl;
    _weapon->attack();
    _ap -= _weapon->getAPCost();
    enemy->takeDamage(_weapon->getDamage());
    if (enemy->getHP() <= 0)
        enemy->~Enemy();
}

std::string Character::getName() const
{
    return (_name);
}

int          Character::getAP() const
{
    return (_ap);
}

AWeapon      *Character::getWeapon() const
{
    return (_weapon);
}

std::ostream& operator<<(std::ostream& os, const Character &ref)
{
    if (ref.getWeapon() != NULL)
        return (os << ref.getName() << " has " <<
            ref.getAP() << " AP and wields a " << 
            (ref.getWeapon())->getName() << std::endl);
    return (os << ref.getName() << " has " <<
        ref.getAP() << " and is unarmed." << std::endl);
}