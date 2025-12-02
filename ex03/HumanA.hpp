/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:12:28 by mokatfi           #+#    #+#             */
/*   Updated: 2025/12/02 09:19:29 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    private :
        std::string name;
        Weapon &weapon;
    public :
        HumanA(const std::string &name, Weapon &weapon);
        ~HumanA();

        void attack() const;
};

#endif
