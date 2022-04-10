# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tidurand <tidurand@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/29 08:21:55 by tidurand          #+#    #+#              #
#    Updated: 2022/04/02 10:24:26 by tidurand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp Contact.cpp PhoneBook.cpp

CC = c++

OBJS = $(SRCS:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

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
