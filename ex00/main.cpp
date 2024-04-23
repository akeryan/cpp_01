/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:52:40 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/23 20:34:17 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main() {
	std::string name;
	Zombie		*z;

	std::cout << std::endl;
	std::cout << "---------- Zombie on the HEAP -----------" << std::endl;
	std::cout << "Enter zombie name: ";
	std::cin >> name;
	z = newZombie(name);
	z->announce();

	std::cout << "---------- Zombie on the STACK -----------" << std::endl;
	std::cout << "Enter zombie name: ";
	std::cin >> name;
	randomChump(name);
	delete z;
	return 0;
}