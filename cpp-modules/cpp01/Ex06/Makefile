# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 19:55:57 by kkouaz            #+#    #+#              #
#    Updated: 2023/10/24 21:01:12 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = Harl.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
