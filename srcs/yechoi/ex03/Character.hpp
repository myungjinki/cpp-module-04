/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:50:21 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 10:01:45 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria    *_inventory[4];
        Character();
    public:
        Character(std::string name);
        Character(const Character & ref);
        Character& operator=(const Character & ref);
        virtual std::string const & getName() const;
        virtual void equip(AMateria * m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter & target);
};

#endif