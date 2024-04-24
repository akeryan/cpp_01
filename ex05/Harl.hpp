/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:03:08 by akeryan           #+#    #+#             */
/*   Updated: 2024/04/24 15:42:18 by akeryan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <functional>
#include <map>

class Harl {
	private:
		std::string levels[4];
		void	(Harl::*funcs[4])(void);
		void	debug (void);
		void	info (void);
		void	warning (void);
		void	error (void);
	public:
		Harl(void);
		void	complain(std::string level);
};