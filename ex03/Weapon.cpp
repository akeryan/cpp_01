/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:56:47 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/21 14:53:13 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(void) {
	type = "";
}

Weapon::Weapon(std::string weaponType) {
	if (weaponType.empty())
		throw std::invalid_argument("weaponType connot be an empty string");
	this->type = weaponType;
}

const std::string &Weapon::getType(void) {
	return type;
}

void Weapon::setType(std::string type) {
	if (type.empty())
		throw std::invalid_argument("weaponType connot be an empty string");
	this->type = type;
}