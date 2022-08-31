/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:26:55 by mki               #+#    #+#             */
/*   Updated: 2021/08/18 02:32:59 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#define ANIMAL_NUM 2

void create()
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "creation test" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    Animal *animal[ANIMAL_NUM];

    for (int i = 0; i < ANIMAL_NUM; i++)
    {
        if (i < ANIMAL_NUM / 2)
        {
            animal[i] = new Cat();
        }
        else
        {
            animal[i] = new Dog();
        }
    }
    for (int i = 0; i < ANIMAL_NUM; i++)
    {
        animal[i]->makeSound();
    }
    for (int i = 0; i < ANIMAL_NUM; i++)
    {
        delete animal[i];
    }
}

void brainTest1()
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "brain test 1" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    Brain a = Brain();
    Brain b = Brain();

    a.setIdea(1, "A");
    std::cout << a.getIdea(1) << std::endl;
    std::cout << b.getIdea(1) << std::endl;
    b = a;
    std::cout << a.getIdea(1) << std::endl;
    std::cout << b.getIdea(1) << std::endl;
}

void catDeepCopy()
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "cat deep copy test" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    Cat c1;
    c1.getBrain()->setIdea(1, "Tiger ");

    Cat c2(c1);
    std::cout << c1.getBrain()->getIdea(1) << c1.getBrain() << std::endl;
    std::cout << c2.getBrain()->getIdea(1) << c2.getBrain() << std::endl;
}

void dogDeepCopy()
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "dog deep copy test" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    Dog basic;
    basic.getBrain()->setIdea(1, "Lion ");
    {
        Dog tmp = basic;
        std::cout << tmp.getBrain()->getIdea(1) << tmp.getBrain() << std::endl;
    }
    std::cout << basic.getBrain()->getIdea(1) << basic.getBrain() << std::endl;
}

int main()
{
    // Animal a = Animal();
    create();
    brainTest1();
    catDeepCopy();
    dogDeepCopy();
}
