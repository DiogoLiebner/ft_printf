# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlima-li <dlima-li@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 15:47:38 by dlima-li          #+#    #+#              #
#    Updated: 2025/11/10 13:31:30 by dlima-li         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



PRINT_SRCS = 		$(wildcard srcs/*.c)
LIBFT_SRCS = 		$(wildcard libft/*.c)
SRCS = 			$(PRINT_SRCS) $(LIBFT_SRCS)

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
		rm -f $(NAME)

re:		fclean $(NAME)

.PHONY: 	all clean fclean re
