# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/07 10:17:26 by tidurand          #+#    #+#              #
#    Updated: 2022/04/07 14:12:42 by tidurand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = fixed

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
