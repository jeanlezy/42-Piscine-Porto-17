# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/03 09:56:43 by jeanbarr          #+#    #+#              #
#    Updated: 2026/08/04 09:23:34 by jeanbarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Configuration file that automates the compilation process
NAME = 	libft.a

SRCS = 	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c \
		srcs/ft_strcmp.c

CC	= 	cc

# All SRCS change .c to .o
OBJS = ${SRCS:.c=.o}

RM	= 	rm -f

CFLAGS = -Wall -Wextra -Werror

# Sufixo (%.o: %.c) to transform .c in .o run this command 
# -I includes = search headers insinde includes
# -c compile but dont link - generate only .o
# $< automatic variable - first pre requisite .c
# -o ${<:.c=.o} = pega $< (.c) and change to .o (the same trick as OBJS)
.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

# $(NAME): ${OBJS} generates the Library Static from Objs
# ar rcs ${NAME} ${OBJS} - Creates the Static Library
$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

# When makefile is called without arguments
all:	${NAME}

# Erase the .o files.
clean:
		${RM} ${OBJS}

# Erases the same files of Clean and the Static Library
fclean:	clean
		${RM} ${NAME}

# clean all files and create them again
re:		fclean all

# These targets are actions, not files—they always run and ignore timestamps.
.PHONY: all clean fclean re