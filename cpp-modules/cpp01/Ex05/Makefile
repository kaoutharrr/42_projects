# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 18:50:23 by kkouaz            #+#    #+#              #
#    Updated: 2023/10/28 05:29:42 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Ex05
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all