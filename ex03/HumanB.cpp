/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:45:50 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/22 10:41:16 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	if (name.empty())
		throw std::invalid_argument("'name' parameter cannot be an empty string");
	this->name = name;
}

void HumanB::attack(void) {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
