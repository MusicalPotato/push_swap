# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/30 19:55:19 by gregoire          #+#    #+#              #
#    Updated: 2021/03/30 20:09:15 by gregoire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all :
			make -C push_swap_files
			make -C checker_files
			cp push_swap_files/push_swap .
			cp checker_files/checker .

clean :
			make -C push_swap_files clean
			make -C checker_files clean

fclean :	clean
			rm -f push_swap checker
			

re :		fclean all
