# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/09 14:31:23 by kkouaz            #+#    #+#              #
#    Updated: 2023/12/09 14:59:24 by kkouaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean	
	$(RM) $(NAME)

re : fclean all
