# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/13 00:18:29 by kkouaz            #+#    #+#              #
#    Updated: 2023/10/28 05:30:46 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Ex03
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean 
	$(RM) $(NAME)

re : fclean all 
