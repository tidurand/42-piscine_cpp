# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 17:01:42 by tidurand          #+#    #+#              #
#    Updated: 2022/04/05 11:24:36 by tidurand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp Zombie.cpp zombieHorde.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

all: $(NAME)

$(NAME):	$(OBJS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

$(OBJS): $(SRCS)
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean $(NAME)
