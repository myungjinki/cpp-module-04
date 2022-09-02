/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:04:06 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 14:45:29 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        std::string _name;
        int         _ap;
        AWeapon     *_weapon;
        Character();
    public:
        Character(std::string const &name);
        Character(const Character & ref);
        Character& operator=(const Character & ref);
        ~Character();
        void        recoverAP();
        void        equip(AWeapon* weapon);
        void        attack(Enemy* enemy);
        std::string getName() const;
        int         getAP() const;
        AWeapon     *getWeapon() const;
};

std::ostream& operator<<(std::ostream& os, const Character &ref);

#endif