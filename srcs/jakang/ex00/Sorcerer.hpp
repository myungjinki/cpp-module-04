/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 17:53:57 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 13:03:27 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string, std::string);
		Sorcerer(const Sorcerer& ref);
		~Sorcerer();
		Sorcerer& operator=(const Sorcerer& ref);
		std::string getName();
		std::string getTitle();
		std::string introduce();
		void polymorph(Victim const &) const;

	private:
		std::string _name;
		std::string _title;
};

std::ostream & operator<<(std::ostream &out, Sorcerer &sorcerer);

#endif
