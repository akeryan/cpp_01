/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:03:23 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/24 15:43:25 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <functional>
#include "Harl.hpp"

Harl::Harl()
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	funcs[0] = &Harl::debug; 
	funcs[1] = &Harl::info;
	funcs[2] = &Harl::warning;
	funcs[3] = &Harl::error;
}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n" << "Debug message" << std::endl << std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]\n" << "Info message" << std::endl << std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]\n" << "Warning message" << std::endl << std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\n" << "Error message" << std::endl << std::endl;
}

void Harl::complain(std::string level) {
	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			(this->*funcs[i])();
	}
};