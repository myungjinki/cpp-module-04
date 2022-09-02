/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/07 21:54:46 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 20:24:31 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria& ref);
		virtual ~AMateria();
		AMateria& operator=(AMateria const & ref);
		std::string const & getType() const;
		unsigned int getXP() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		unsigned int	_xp;
		std::string		_type;
};

#endif
