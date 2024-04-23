/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 09:47:54 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/23 17:06:49 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

int main() {
	Harl h;
	h.complain("DEBUG"); 
	h.complain("INFO");
	h.complain("WARNING"); 
	h.complain("ERROR");
	return 0;
}