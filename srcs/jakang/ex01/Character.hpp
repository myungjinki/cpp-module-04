/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 20:01:16 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 15:18:23 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		Character(std::string const & name);
		Character(const Character& ref);
		~Character();
		Character   & operator=(Character const & ref);
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string  getName() const;
		int          getAP() const;
		AWeapon      *getWeapon() const;

	private:
		std::string     _name;
		int             _ap;
		AWeapon         *_weapon;
};

std::ostream    & operator<<(std::ostream & out, Character const & rhs);

#endif