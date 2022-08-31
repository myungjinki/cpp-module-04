/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:45:09 by mki               #+#    #+#             */
/*   Updated: 2021/08/08 10:27:32 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain *brain;

public:
    Dog();
    Dog(const Dog &d);
    Dog &operator=(const Dog &d);
    virtual ~Dog();
    virtual std::string getType() const;
    virtual void makeSound() const;
    virtual Brain *getBrain();
};

#endif
