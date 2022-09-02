/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 19:59:19 by jakang            #+#    #+#             */
/*   Updated: 2021/01/04 10:48:09 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	public:
		AWeapon(std::string const & name, int damage, int apcost);
	    AWeapon(const AWeapon& ref);
		~AWeapon(void);
        AWeapon& operator=(const AWeapon& ref);
		std::string getName(void) const;
		int getAPCost(void) const;
		int getDamage(void) const;
		virtual void attack(void) const = 0;

	private:
		std::string     _name;
		int             _damage;
		int             _apcost;

};

std::ostream & operator<<(std::ostream & out, AWeapon const &aweapon);

#endif