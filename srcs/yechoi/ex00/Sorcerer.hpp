/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:16:17 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/14 21:07:36 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SORCERER_HPP
#define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
    protected:
        std::string _name;
        std::string _title;
        Sorcerer();
    
    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(const Sorcerer & ref);
        Sorcerer& operator=(const Sorcerer & ref);
        ~Sorcerer();
        std::string getName() const;
        std::string getTitle() const;
        void        polymorph(Victim const & ref) const;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer &ref);

#endif