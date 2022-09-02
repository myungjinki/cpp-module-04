/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:03:49 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/16 13:39:06 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy
{
    protected:
        int         _hitPoint;
        std::string _type;
        Enemy();
    public:
        Enemy(int hp, std::string const & type);
        Enemy(const Enemy &ref);
        Enemy& operator=(const Enemy & ref);
        virtual ~Enemy();
        std::string     getType() const;
        int             getHP() const;
        virtual void    takeDamage(int);
};

# endif