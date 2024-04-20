/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 16:52:40 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/20 20:25:18 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "header.hpp"

int main() {
	Zombie		*z;
	int			N;
	std::string	name;

	std::cout << "Enter number of zombies: ";
	std::cin >> N;
	std::cout << "Enter zombie name: ";
	std::cin >> name;
	std::cout << std::endl;

	z = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete [] z;
	return 0;
}