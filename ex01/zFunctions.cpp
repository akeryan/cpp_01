/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zFunctions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:10:06 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/20 19:10:33 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	return new Zombie(name);
}

void randomChump(std::string name) {
	Zombie z;

	z.setName(name);
	z.announce();
}