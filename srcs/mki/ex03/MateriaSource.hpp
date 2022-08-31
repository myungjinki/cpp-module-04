/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 01:22:31 by mki               #+#    #+#             */
/*   Updated: 2021/08/09 03:01:55 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE
#define MATERIA_SOURCE
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria *_inventory[4];

public:
    MateriaSource();
    MateriaSource(const MateriaSource &a);
    MateriaSource &operator=(const MateriaSource &a);
    ~MateriaSource();
    virtual void learnMateria(AMateria *);
    virtual AMateria *createMateria(std::string const &type);
};

#endif
