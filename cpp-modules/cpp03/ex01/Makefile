# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 18:28:32 by kkouaz            #+#    #+#              #
#    Updated: 2023/11/04 18:29:22 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM  = rm -rf
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp 
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CPPFLAGS) $(SRC) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean	
	$(RM) $(NAME)

re : fclean all