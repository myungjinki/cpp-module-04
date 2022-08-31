# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mki <mki@student.42seoul.fr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/29 14:21:47 by mki               #+#    #+#              #
#    Updated: 2021/08/09 00:11:17 by mki              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out
CXX			=	clang++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g
RM			=	rm -rf
FILES		=	Animal\
				Brain\
				Cat\
				Dog\
				main\

SRCS_DIR	=	./
SRCS		=	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES))) 
OBJS		=	$(addprefix $(SRCS_DIR), $(addsuffix .o, $(FILES))) 

.cpp.o:
	$(CXX) $(CXXFLAGS) -c -o $@ $<

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@ 

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
