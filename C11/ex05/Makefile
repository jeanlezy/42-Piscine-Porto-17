NAME = do-op
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I./includes
RM = rm -rf

SRCS = $(addprefix srcs/, ft_atoi.c ft_math.c ft_util.c main.c )

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	
all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re