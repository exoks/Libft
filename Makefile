# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile3                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oezzaou <oezzaou@student.1337.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/03 15:27:50 by oezzaou           #+#    #+#              #
#    Updated: 2022/08/03 15:27:53 by oezzaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME := libft.a
OBJS := $(patsubst %.c, %.o, $(wildcard *[!s].c))
OBJSB := $(patsubst %.c, %.o, $(wildcard *.c))
CFLAGS := -Wall -Wextra -Werror
HEADER := libft.h

all: $(NAME)
# here i used the archive tool as an implicit rule
$(NAME): $(HEADER) | $(OBJS)
	ar -r $@ $|

#bonus: $(OBJSB) $(NAME)()

clean:
	rm *.o
fclean:
	rm *.o $(NAME)
re: fclean $(NAME)

.PHONY : all bonus clean fclean re
# $(NAME) is not a phony target : cause it's target's name referes to a file
