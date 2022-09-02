/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 14:07:58 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 20:17:57 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& ref);
		~MateriaSource(void);
		MateriaSource& operator=(MateriaSource const & ref);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria		*_inventory[4];
};

#endif
