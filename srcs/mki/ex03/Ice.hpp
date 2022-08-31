/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 00:34:02 by mki               #+#    #+#             */
/*   Updated: 2021/08/09 18:31:14 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
    Ice();
    Ice(std::string const &type);
    Ice(const Ice &a);
    Ice &operator=(const Ice &a);
    virtual ~Ice();

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif
