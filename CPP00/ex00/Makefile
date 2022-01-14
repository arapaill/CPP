# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 10:54:52 by user42            #+#    #+#              #
#    Updated: 2022/01/14 11:22:30 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = clang++
CPPFLAGS = -Wall -Wextra -Werror

NAME = megaphone
SRC = megaphone.cpp


all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(CPPFLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all