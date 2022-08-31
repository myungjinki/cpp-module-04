/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:26:55 by mki               #+#    #+#             */
/*   Updated: 2021/08/12 15:17:55 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    std::cout << "============ Default ============" << std::endl;
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::string name = "me";
    ICharacter *me = new Character(name);

    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice"));

    name = "bob";
    ICharacter *bob = new Character(name);

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);

    std::cout << "============ No Equip ============" << std::endl;
    bob->use(0, *me);

    std::cout << "============ Unequip ============" << std::endl;
    me->use(2, *bob);
    me->unequip(2);
    me->use(2, *bob);
    delete bob;
    delete me;

    std::cout << "============ Copy ============" << std::endl;
    name = "cat";
    ICharacter *cat = new Character(name);
    Character ori;

    ori.equip(src->createMateria("ice"));
    Character cpy(ori);
    cpy.use(0, *cat);
    delete cat;

    {
        std::cout << "======== When Type does not exist ========" << std::endl;
        IMateriaSource *src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        std::cout << src->createMateria("other") << std::endl;
        delete src;
    }
    delete src;
}
