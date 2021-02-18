# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmitsuko <pmitsuko@student.42sp.org>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 08:56:23 by pmitsuko          #+#    #+#              #
#    Updated: 2021/02/18 14:32:29 by pmitsuko         ###   ########.fr        #
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
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\

BONUS_FILES	=	ft_lstnew.c

OBJ			=	$(FILES:.c=.o)
BONUS_OBJ	=	$(BONUS_FILES:.c=.o)
RM			=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
	@ar rcs $@ $(OBJ)
	@echo "$(NAME) created"
	@ranlib $@
	@echo "$(NAME) indexed"

$(OBJ):		$(FILES)
	@gcc -c $(FLAG) $(FILES)

bonus:
	@gcc -c $(FLAG) $(BONUS_FILES)
	@ar rcs $(NAME) $(BONUS_OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

$(BONUS_OBJ):		$(BONUS_FILES)
	@gcc -c $(FLAG) $(BONUS_FILES)
	@echo "compile bonus files"

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ)
	@echo "OBJ deleted"

fclean:		clean
	@$(RM) $(NAME)
	@echo "$(NAME) deleted"

re:			fclean all

normi:		$(FILES)
	norminette $(FILES)

normib:	$(BONUS_FILES)
	norminette $(BONUS_FILES)

test:		 main.c $(NAME)
	@gcc $(FLAG) main.c $(NAME) && ./a.out

git:
	git add .
	git commit -m "$m"
	git push origin main

.PHONY: all, clean, fclean, re
