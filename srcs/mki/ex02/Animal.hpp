/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:29:03 by mki               #+#    #+#             */
/*   Updated: 2021/08/12 13:00:17 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(const Animal &a);
    Animal &operator=(const Animal &a);
    virtual ~Animal();
    virtual std::string getType() const;
    virtual void makeSound() const = 0;
    virtual Brain *getBrain() { return 0; };
};

#endif
