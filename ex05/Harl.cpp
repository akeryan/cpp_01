/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:03:23 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/23 17:05:46 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <functional>
#include "Harl.hpp"

Harl::Harl(void) {
	fmap["DEBUG"] = &Harl::debug; 
	fmap["INFO"] = &Harl::info;
	fmap["WARNING"] = &Harl::warning;
	fmap["ERROR"] = &Harl::error;
}

void Harl::debug(void) {
	std::cout << "Debug message" << std::endl;
}

void Harl::info(void) {
	std::cout << "Info message" << std::endl;
}

void Harl::warning(void) {
	std::cout << "Warning message" << std::endl;
}

void Harl::error(void) {
	std::cout << "Error message" << std::endl;
}

void Harl::complain(std::string level) {
	std::map <std::string, void(Harl::*)(void) >::iterator it = fmap.find(level);
	if (it != fmap.end()) {
		(this->*(it->second))();
	} else {
		std::cout << "ERROR: Invalid argument!" << std::endl;
	}
};