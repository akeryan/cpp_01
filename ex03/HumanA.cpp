/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:08:58 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/27 12:40:32 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) {
	this->name = name;
	this->weapon = &weapon;
}

void HumanA::attack(void) {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
