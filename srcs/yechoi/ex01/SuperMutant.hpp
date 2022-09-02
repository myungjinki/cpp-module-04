/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:38:03 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 14:49:16 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy 
{
    public:
        SuperMutant();
        SuperMutant(const SuperMutant &ref);
        SuperMutant& operator=(const SuperMutant & ref);
        ~SuperMutant();
        virtual void takeDamage(int damage);
};

# endif