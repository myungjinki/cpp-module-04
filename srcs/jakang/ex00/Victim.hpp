/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/06 17:54:01 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 13:24:26 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class Victim
{
	public:
		Victim(std::string);
		Victim(const Victim& ref);
		~Victim();
		Victim& operator=(const Victim& ref);
		std::string 	getName() const;
		std::string 	introduce();
		virtual void    getPolymorphed() const;

	private:
		std::string _name;
};

std::ostream & operator<<(std::ostream &out, Victim &victim);

#endif
