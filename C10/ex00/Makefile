NAME = ft_display_file
SRCS = ./ft_display_file.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf



# (Pattern rule)%.o : %.c to transform .c into .o run this command
# $<: automatic variable - first pre req .c
# $@: rule target (.o que esta a ser gerado)
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

