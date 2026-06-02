/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfuto <kfuto@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 16:31:10 by kfuto             #+#    #+#             */
/*   Updated: 2026/06/02 16:34:18 by kfuto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void	        (Harl::*funcPtr)(void) = NULL;
	void	        (Harl::*array[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string     arrayLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
    {
		if (arrayLevel[i] == level)
        {
            funcPtr = array[i];
            break;
        }
	}
	if (!funcPtr) 
		std::cout << "\033[1;31m Error! \033[0m Invalid Harl's complain level!" << std::endl; 
    else
	    (this->*funcPtr)();
}
