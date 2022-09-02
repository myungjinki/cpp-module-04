# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jakang <jakang@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/03 22:53:17 by jakang            #+#    #+#              #
#    Updated: 2020/04/08 23:39:51 by jakang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= PURIFY
SRCS	:= main.cpp Squad.cpp TacticalMarine.cpp AssaultTerminator.cpp
OBJS	:= $(SRCS:.cpp=.o)
CC		:= clang++
FLAGS	:= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re