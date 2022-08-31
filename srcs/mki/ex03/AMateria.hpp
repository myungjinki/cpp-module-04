/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 00:24:31 by mki               #+#    #+#             */
/*   Updated: 2021/08/12 14:42:16 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
#define A_MATERIA_HPP

#include <iostream>
#include <string>
class ICharacter;

class AMateria
{
protected:
    std::string _type;
    AMateria();

public:
    AMateria(std::string const &type);
    AMateria(const AMateria &a);
    AMateria &operator=(const AMateria &a);
    virtual ~AMateria();

    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif
