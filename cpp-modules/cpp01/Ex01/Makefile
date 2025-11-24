# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 11:11:43 by kkouaz            #+#    #+#              #
#    Updated: 2023/10/28 03:50:33 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = main.cpp Zombie.cpp ZombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all 