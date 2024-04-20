/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:52:40 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/20 20:19:59 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
	std::string name;
	Zombie		*z;

	std::cout << std::endl;
	std::cout << "---------- Zombie on the STACK -----------" << std::endl;
	std::cout << "Enter zombie name: ";
	std::cin >> name;
	z = newZombie(name);
	z->announce();

	std::cout << "---------- Zombie on the HEAP -----------" << std::endl;
	std::cout << "Enter zombie name: ";
	std::cin >> name;
	randomChump(name);
	delete z;
	return 0;
}