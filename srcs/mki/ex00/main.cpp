/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:26:55 by mki               #+#    #+#             */
/*   Updated: 2021/08/07 05:54:15 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

void wrong()
{
    const WrongAnimal *meta = new WrongAnimal();
    const WrongAnimal *i = new WrongCat();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound();
    delete meta;
    delete i;
}

void correct()
{
    const Animal *meta = new Animal();
    const Animal *i = new Cat();
    const Animal *j = new Dog();

    std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    meta->makeSound();
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    delete meta;
    delete i;
    delete j;
}

int main()
{
    correct();
    std::cout << std::endl;
    wrong();
}
