# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/20 17:55:48 by kkouaz            #+#    #+#              #
#    Updated: 2023/10/27 03:32:38 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Ex04
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = main.cpp utils.cpp
OBJ = $(SRC:.cpp=.o)


all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
