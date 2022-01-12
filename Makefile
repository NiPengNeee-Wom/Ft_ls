# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yplag <yplag@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/15 15:20:50 by yplag             #+#    #+#              #
#    Updated: 2015/02/15 15:20:50 by yplag            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRCC =	ft_ls.c			sort.c		print.c			convert.c	\
		check_arg.c		read.c		libft/libft.a	space.c		\
		greatest.c		flagn.c		calc.c	

SRCO = zboub

FLAG =  -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@rm -f $(NAME)
	@gcc $(FLAG) $(SRCC) -o $(NAME)

lib:
	@cd libft; make re; cd ..
	@gcc $(FLAG) $(SRCC) -o $(NAME)

brute: lib all

clean:
	@rm -f $(SRCO)

fclean: clean
	@rm -f $(NAME)

re: fclean all
