/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 02:50:58 by mokatfi           #+#    #+#             */
/*   Updated: 2025/11/30 04:07:24 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
    private :
        std::string name;
    public :
        Zombie(std::string name);
        ~Zombie();
        
        void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
