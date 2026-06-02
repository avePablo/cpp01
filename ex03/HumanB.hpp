/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfuto <kfuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:30:51 by kfuto             #+#    #+#             */
/*   Updated: 2026/06/02 16:30:52 by kfuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(std::string name);
    void setWeapon(Weapon& weapon);
    void attack(void) const;
};

#endif
