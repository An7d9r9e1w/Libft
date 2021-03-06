# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nnamor <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/18 10:22:26 by nnamor            #+#    #+#              #
#    Updated: 2021/05/26 18:58:30 by nnamor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_memset.c		ft_bzero.c			ft_memcpy.c		\
		  ft_memccpy.c		ft_memmove.c		ft_memchr.c		\
		  ft_memcmp.c		ft_strlen.c			ft_strlcpy.c	\
		  ft_strlcat.c		ft_strchr.c			ft_strrchr.c	\
		  ft_strnstr.c		ft_strncmp.c		ft_atoi.c		\
		  ft_isalpha.c		ft_isdigit.c		ft_isalnum.c	\
		  ft_isascii.c		ft_isprint.c		ft_toupper.c	\
		  ft_tolower.c		ft_calloc.c			ft_strdup.c		\
		  ft_substr.c		ft_strjoin.c		ft_strtrim.c	\
		  ft_split.c		ft_itoa.c			ft_strmapi.c	\
		  ft_putchar_fd.c	ft_putstr_fd.c		ft_putendl_fd.c	\
		  ft_putnbr_fd.c										\

OBJS	= ${SRCS:.c=.o}

BSRCS	= ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	\
		  ft_lstlast.c		ft_lstadd_back.c	ft_lstdelone.c	\
		  ft_lstclear.c		ft_lstiter.c		ft_lstmap.c		\

BOBJS	= ${BSRCS:.c=.o}

HEADS	= libft.h

NAME	= libft.a

CC		= gcc

AR		= ar rcs

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

%.o:		%.c	${HEADS}
			${CC} ${CFLAGS} -I . -c -o $@ $<

${NAME}:	${OBJS}
			${AR} $@ $^

all:		${NAME}

bonus:		${NAME} ${BOBJS}
			${AR} ${NAME} $^

clean:
			${RM} ${OBJS} ${BOBJS}

delete:
			${RM} ${NAME}

fclean:		clean delete

re:			fclean all

force:		delete all

.PHONY:		all bonus clean delete fclean re force
