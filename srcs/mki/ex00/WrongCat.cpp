/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 21:58:27 by mki               #+#    #+#             */
/*   Updated: 2021/08/08 00:40:11 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &c)
{
    WrongCat::operator=(c);
    std::cout << "WrongCat Copy Constructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &c)
{
    _type = c._type;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor" << std::endl;
}

std::string WrongCat::getType() const
{
    std::cout << "WrongCat sound" << std::endl;
    return (_type);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}
