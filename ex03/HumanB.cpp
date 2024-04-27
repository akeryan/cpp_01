/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:45:50 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/27 12:40:59 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->name = name;
}

void HumanB::attack(void) {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}
