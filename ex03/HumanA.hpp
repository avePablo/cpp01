/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfuto <kfuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:30:47 by kfuto             #+#    #+#             */
/*   Updated: 2026/06/02 16:30:48 by kfuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon& weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    void attack(void) const;
};

#endif
