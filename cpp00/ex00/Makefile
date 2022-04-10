# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 11:24:34 by tidurand          #+#    #+#              #
#    Updated: 2022/04/02 10:18:29 by tidurand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	megaphone.cpp

CC = c++

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(FLAGS) $(SRCS) -o $(NAME)

$(OBJS): $(SRCS)
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean $(NAME)
