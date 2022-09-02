/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 20:00:32 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 15:05:45 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	public:
		Enemy(int hp, std::string const & type);
		Enemy(const Enemy& ref);
		virtual ~Enemy();
		Enemy& operator=(const Enemy& ref);
		std::string getType() const;
		int getHP() const;
		void setHP(int);
		virtual void takeDamage(int);

	private:
		int         _hp;
		std::string _type;
};

#endif