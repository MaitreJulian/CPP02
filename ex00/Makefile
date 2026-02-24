# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvenkata <jvenkata@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/13 14:32:04 by jvenkata          #+#    #+#              #
#    Updated: 2026/02/13 14:32:34 by jvenkata         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MFC_OCF
SRC = main.cpp Fixed.cpp
C = c++
CFLAGS = -Iinclude -Wall -Wextra -Werror -g -std=c++98
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(OBJ) -o $@

%.o: %.cpp
	$(C) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re