/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 01:43:22 by mki               #+#    #+#             */
/*   Updated: 2021/08/08 10:27:02 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(const Cat &c);
    Cat &operator=(const Cat &c);
    virtual ~Cat();
    virtual std::string getType() const;
    virtual void makeSound() const;
    virtual Brain *getBrain();
};

#endif
