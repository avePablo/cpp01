/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfuto <kfuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:30:57 by kfuto             #+#    #+#             */
/*   Updated: 2026/06/02 16:30:58 by kfuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType(void) const
{
    return type;
}

void Weapon::setType(const std::string& type)
{
    this->type = type;
}
