/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 04:06:00 by mokatfi           #+#    #+#             */
/*   Updated: 2025/11/30 04:09:40 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* heabZombie = newZombie("Heapbob");
    heabZombie->announce();
    delete heabZombie;

    randomChump("stackbob");
    return 0;
}