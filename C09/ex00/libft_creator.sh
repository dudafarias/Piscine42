# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: efarias- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 18:28:54 by efarias-          #+#    #+#              #
#    Updated: 2025/02/15 18:29:09 by efarias-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#!/bin/bash

gcc -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
