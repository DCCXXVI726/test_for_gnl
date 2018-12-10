# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thorker <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/07 18:44:46 by thorker           #+#    #+#              #
#    Updated: 2018/12/10 15:48:08 by thorker          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
SRC = ft_put_my_char.c ft_put_my_nbr.c ft_put_my_str.c ft_putnbrln.c ft_putstrln.c ft_put_re_error.c ft_cmp_line.c ft_put_line_error.c ../get_next_line/get_next_line.c
MY_INC = -I fttest.h
INC = -I ../get_next_line/get_next_line.h -I ../get_next_line/libft/includes
LIB = -L ../get_next_line/libft/ -lft

preparation:
	make -C ../get_next_line/libft/ fclean
	make -C ../get_next_line/libft/ 

first_test:
	gcc $(FLAGS) first_test.c $(SRC) $(INC) $(MY_INC) $(LIB) -o first_testout
	./first_testout

bonus_test:
	gcc $(FLAGS) bonus_test.c $(SRC) $(INC) $(MY_INC) $(LIB) -o bonus_testout
	./bonus_testout

miss_test:
	gcc $(FLAGS) test_for_miss.c $(SRC) $(INC) $(MY_INC) $(LIB) -o miss_testout
	./miss_testout

clean_test:
	bin/rm -f *_testout
