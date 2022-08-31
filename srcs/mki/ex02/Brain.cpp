/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 06:40:02 by mki               #+#    #+#             */
/*   Updated: 2021/08/08 10:32:57 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < IDEAS; i++)
    {
        ideas[i] = "";
    }
    std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(const Brain &b)
{
    Brain::operator=(b);
    std::cout << "Brain Copy Constructor" << std::endl;
}

Brain &Brain::operator=(const Brain &b)
{
    for (int i = 0; i < IDEAS; i++)
    {
        ideas[i] = b.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor" << std::endl;
}

std::string Brain::getIdea(int idx)
{
    return ideas[idx];
}

void Brain::setIdea(int idx, std::string idea)
{
    ideas[idx] = idea;
}
