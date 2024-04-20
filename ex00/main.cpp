/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:52:40 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/20 17:15:09 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <iostream>
#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	return new Zombie(name);
}

void randomChump(std::string name) {
	Zombie z;

	z.setName(name);
	z.announce();
}

int main() {
	Zombie *z;

	z = newZombie("Rob");
	z->announce();
	randomChump("Alice");
	return 0;
}