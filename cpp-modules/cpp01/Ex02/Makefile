# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 11:58:02 by kkouaz            #+#    #+#              #
#    Updated: 2023/10/28 03:54:15 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Ex02
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = main.cpp
OBJ = main.o

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean 
	$(RM) $(NAME)

re : fclean all 
