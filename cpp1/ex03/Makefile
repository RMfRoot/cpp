# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/01 01:40:36 by egeorgel          #+#    #+#              #
#    Updated: 2023/06/06 01:33:03 by egeorgel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = ${SRC:.cpp=.o}
CFLAGS = -std=c++98 -Wall -Werror -Wextra#-g -fsanitize=address
NAME = Violence

all: $(NAME)

$(NAME): $(OBJ) Makefile
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.cpp.o: $(HDR) Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

.PHONY: all clean fclean re