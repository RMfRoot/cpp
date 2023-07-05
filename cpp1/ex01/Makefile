# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egeorgel <egeorgel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/01 01:40:36 by egeorgel          #+#    #+#              #
#    Updated: 2023/07/05 18:21:52 by egeorgel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
SRC = main.cpp Zombie.cpp
OBJ = ${SRC:.cpp=.o}
CFLAGS = -std=c++98 -Wall -Werror -Wextra#-g -fsanitize=address
NAME = Zombie

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