/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 06:38:11 by mki               #+#    #+#             */
/*   Updated: 2021/08/08 09:02:36 by mki              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#define IDEAS 100

class Brain
{
private:
    std::string ideas[IDEAS];

public:
    Brain();
    Brain(const Brain &b);
    Brain &operator=(const Brain &b);
    ~Brain();
    std::string getIdea(int idx);
    void setIdea(int idx, std::string idea);
};

#endif
