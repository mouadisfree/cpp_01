/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:29:55 by mokatfi           #+#    #+#             */
/*   Updated: 2025/12/02 10:15:42 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
    private :
        std::string name;
        Weapon *weapon;
    public :
        HumanB(const std::string &name);
        ~HumanB();

        void setWeapon(Weapon &weapon);
        void attack() const;
};

#endif