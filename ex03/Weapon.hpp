/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfuto <kfuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:31:00 by kfuto             #+#    #+#             */
/*   Updated: 2026/06/02 16:31:01 by kfuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string type);
    const std::string& getType(void) const;
    void setType(const std::string& type);
};

#endif
