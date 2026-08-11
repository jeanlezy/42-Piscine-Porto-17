# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/02 18:21:32 by jeanbarr          #+#    #+#              #
#    Updated: 2026/08/02 18:38:10 by jeanbarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

gcc -c -Wall -Wextra -Werror ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o