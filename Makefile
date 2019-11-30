# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvidal-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 12:02:02 by mvidal-a          #+#    #+#              #
#    Updated: 2019/11/30 15:17:15 by mvidal-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= ft_memset.c\
			  ft_bzero.c\
			  ft_memcpy.c\
			  ft_memccpy.c\
			  ft_memmove.c\
			  ft_memchr.c\
			  ft_memcmp.c\
			  ft_strlen.c\
			  ft_isalpha.c\
			  ft_isdigit.c\
			  ft_isalnum.c\
			  ft_isascii.c\
			  ft_isprint.c\
			  ft_toupper.c\
			  ft_tolower.c\
			  ft_strchr.c\
			  ft_strrchr.c\
			  ft_strncmp.c\
			  ft_strlcpy.c\
			  ft_strlcat.c\
			  ft_strnstr.c\
			  ft_atoi.c\
			  ft_calloc.c\
			  ft_strdup.c\
			  ft_substr.c\
			  ft_strjoin.c\
			  ft_strtrim.c\
			  ft_split.c\
			  ft_itoa.c\
			  ft_strmapi.c\
			  ft_putchar_fd.c\
			  ft_putstr_fd.c\
			  ft_putendl_fd.c\
			  ft_putnbr_fd.c

SRCS_BONUS	= ft_lstnew.c\
			  ft_lstadd_front.c\
			  ft_lstsize.c\
			  ft_lstlast.c\
			  ft_lstadd_back.c\
			  ft_lstdelone.c\
			  ft_lstclear.c\
			  ft_lstiter.c\
			  ft_lstmap.c

SRCS_CUSTOM	= ft_putlnbr_fd.c\
			  ft_putlnbr_hex_fd.c\
			  ft_uitoa.c

CFLAGS		= -Wall -Wextra -Werror

OBJS		= ${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

OBJS_CUSTOM	= ${SRCS_CUSTOM:.c=.o}

CC			= gcc
RM			= rm -f

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

bonus:		${NAME} ${OBJS_BONUS}
			ar rc ${NAME} ${OBJS_BONUS}

custom:		${NAME} ${OBJS_CUSTOM}
			ar rc ${NAME} ${OBJS_CUSTOM}

all:		${NAME} bonus

clean:
			${RM} ${OBJS} ${OBJS_BONUS} ${OBJS_CUSTOM}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all bonus clean fclean re .c.o
