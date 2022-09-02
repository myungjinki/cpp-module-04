/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 11:28:46 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 12:09:48 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
    protected:
        std::string _name;
        int         _damagePoint;
        int         _APCost;
        AWeapon();

    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(const AWeapon & ref);
        AWeapon& operator=(const AWeapon & ref);
        virtual ~AWeapon();
        std::string     getName() const;
        int             getAPCost() const;
        int             getDamage() const;
        virtual void    attack() const = 0;
};

#endif