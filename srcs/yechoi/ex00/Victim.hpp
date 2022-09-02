/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:11:24 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/14 21:24:03 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>

class Victim
{
    protected:
        std::string _name;
    public:
        Victim();
        Victim(std::string name);
        Victim(const Victim & ref);
        Victim& operator=(const Victim & ref);
        virtual ~Victim();
        std::string getName() const;
        virtual void    getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& os, const Victim &ref);

#endif