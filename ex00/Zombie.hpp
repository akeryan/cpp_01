/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:51:30 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/20 17:12:51 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie {
	private:
		std::string	name;

	public:
		Zombie(void);
		Zombie(std::string name);
		void setName(std::string name);
		void announce(void);
};