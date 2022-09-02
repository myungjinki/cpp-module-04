/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yechoi <yechoi@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:58:06 by yechoi            #+#    #+#             */
/*   Updated: 2020/11/17 11:57:38 by yechoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad: public ISquad
{
    private:
        typedef struct      s_list
        {
            ISpaceMarine    *_unit;
            struct s_list   *_next;
        }                   t_list;
        int                 _num;
        t_list             *_list;
    public:
        Squad();
        Squad(const Squad &ref);
        Squad &operator=(const Squad &ref);
        virtual ~Squad();
        virtual int getCount() const;
        virtual ISpaceMarine* getUnit(int idx) const;
        virtual int push(ISpaceMarine* marine);
};

#endif