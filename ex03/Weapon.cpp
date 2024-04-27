/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 20:56:47 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/27 12:41:39 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(void) {
	type = "";
}

Weapon::Weapon(std::string weaponType) {
	this->type = weaponType;
}

const std::string &Weapon::getType(void) {
	return type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}