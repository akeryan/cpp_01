/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:08:58 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/22 10:38:02 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
	if (name.empty())
		throw std::invalid_argument("Human name cannot be an empty string");
	this->name = name;
	this->weapon = &weapon;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
