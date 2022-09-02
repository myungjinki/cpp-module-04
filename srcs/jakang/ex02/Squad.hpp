/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaemin <jaemin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 18:20:02 by jakang            #+#    #+#             */
/*   Updated: 2021/01/02 16:57:28 by jaemin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{
	public:
		Squad();
		Squad(const Squad& ref);
		~Squad();
		Squad& operator=(Squad const & ref);
		int				getCount() const;
		ISpaceMarine*	getUnit(int nth) const;
		int				push(ISpaceMarine*);

	private:
		int				_count;
		ISpaceMarine	**_units;
};

#endif
