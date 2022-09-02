/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 11:50:34 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/19 10:14:14 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string     _type;
        unsigned int    _xp;
        AMateria();
    public:
        AMateria(std::string const &type);
        AMateria(const AMateria &ref);
        AMateria &operator=(const AMateria &ref);
        virtual ~AMateria();
        
        std::string const & getType() const;
        unsigned int        getXP() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter & target);
};

#endif