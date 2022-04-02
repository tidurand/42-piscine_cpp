# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 17:01:42 by tidurand          #+#    #+#              #
#    Updated: 2022/04/02 08:15:21 by tidurand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = string

all: $(NAME)

$(NAME):	$(OBJS)
		c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean $(NAME)
