/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:03:08 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/23 17:01:49 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <functional>
#include <map>

class Harl {
	private:
		std::map <std::string, void(Harl::*)(void) > fmap;
		void debug (void);
		void info (void);
		void warning (void);
		void error (void);
	public:
		Harl(void);
		void complain(std::string level);
};