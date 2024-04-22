# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akeryan <akeryan@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 20:49:33 by akeryan           #+#    #+#              #
#    Updated: 2024/04/21 15:19:06 by akeryan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = executable 

FLAGS =  -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -rf

SRC_FILES = main.cpp	\
			Weapon.cpp	\
			HumanA.cpp	\
			HumanB.cpp	

INCLUDE_FILES = Weapon.hpp	\
				HumanA.hpp	\
				HumanB.hpp	


OBJ = $(patsubst %.cpp, %.o, $(SRC_FILES))

%.o: %.cpp $(INCLUDE_FILES) 
	$(CC) $(FLAGS) -o $@ -c $<  

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
