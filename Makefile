# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlima-li <dlima-li@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 15:47:38 by dlima-li          #+#    #+#              #
#    Updated: 2025/10/29 16:16:52 by dlima-li         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 

OFILES = 	$(SRCS:.c=.o)

CC = 		cc
CFLAGS = 	-Wall -Wextra -Werror

NAME = 		libftprintf.a

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME): 	$(OFILES)
		ar rcs $(NAME) $(OFILES)

clean:
		rm -f $(OFILES)

fclean:		clean
		fm -f $(NAME)

re:		fclean $(NAME)

.PHONY: 	all clean fclean re
