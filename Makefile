# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 08:56:23 by pmitsuko          #+#    #+#              #
#    Updated: 2021/02/12 13:14:07 by pmitsuko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

FILES	=	ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_strlen.c		\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strnstr.c	\
			ft_strncmp.c	\
			ft_atoi.c		\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isalnum.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\

OBJ		=	$(FILES:.c=.o)
RM		=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
	@ar rcs $@ $(OBJ)
	@echo "$(NAME) created"
	@ranlib $@
	@echo "$(NAME) indexed"

$(OBJ):		$(FILES)
	@gcc -c $(FLAG) $(FILES)

clean:
	@$(RM) $(OBJ)	
	@echo "OBJ deleted"

fclean:		clean
	@$(RM) $(NAME)
	@echo "$(NAME) deleted"

re:			fclean all

normi:		$(FILES)
	norminette $(FILES)

test:		 main.c $(NAME)
	@gcc $(FLAG) main.c $(NAME) && ./a.out

.PHONY: all, clean, fclean, re
