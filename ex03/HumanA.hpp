/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 14:02:26 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/22 10:37:02 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class HumanA {
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void attack(void);
};

#endif