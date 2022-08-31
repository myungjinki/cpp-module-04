/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 00:33:45 by mki               #+#    #+#             */
/*   Updated: 2021/08/09 18:30:31 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
    Cure();
    Cure(std::string const &type);
    Cure(const Cure &a);
    Cure &operator=(const Cure &a);
    virtual ~Cure();

    virtual AMateria *clone() const;
    virtual void use(ICharacter &target);
};

#endif
