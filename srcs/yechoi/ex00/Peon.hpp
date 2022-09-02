/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:11:10 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/14 21:24:15 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"

class Peon : public Victim
{
    public:
        Peon();
        Peon(std::string name);
        Peon(const Peon & ref);
        Peon& operator=(const Peon & ref);
        ~Peon();
        void    getPolymorphed() const;
};

#endif