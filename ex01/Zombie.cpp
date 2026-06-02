/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfuto <kfuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:30:28 by kfuto             #+#    #+#             */
/*   Updated: 2026/06/02 16:30:29 by kfuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie()
{
    std::cout << name << " destroyed\n";
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
