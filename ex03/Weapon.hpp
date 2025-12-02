/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 08:45:00 by mokatfi           #+#    #+#             */
/*   Updated: 2025/12/02 09:00:02 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string.h>
#include <iostream>

class Weapon {
    private :
        std::string type;
    public :
        Weapon(const std::string &type);
        ~Weapon();

        const std::string &getType() const;
        void setType(const std::string &newType);
};

#endif