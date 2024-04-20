/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:11:37 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/20 19:19:59 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);
Zombie	*newZombie(std::string name);
void	randomChump(std::string name); 

#endif

