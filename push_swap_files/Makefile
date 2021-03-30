# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/30 18:46:45 by gregoire          #+#    #+#              #
#    Updated: 2021/03/30 18:46:52 by gregoire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

LIBFT		=	libft/libft.a

SRCS_NAME	=	main/main.c \
				main/ft_setup.c \
				algo/algo_manager.c \
				algo/checker.c \
				display/display.c \
				flags/flags.c \
				operations/ft_pa.c \
				operations/ft_pb.c \
				operations/ft_ra.c \
				operations/ft_rb.c \
				operations/ft_rr.c \
				operations/ft_rra.c \
				operations/ft_rrb.c \
				operations/ft_rrr.c \
				operations/ft_sa.c \
				operations/ft_sb.c \
				operations/ft_ss.c \
				operations/operation_manager.c \
				parsing/parse_argv.c \
				parsing/parse_dup.c \
				struct/ft_lstdata_utils.c \

INC_NAME	= 	push_swap.h \
				struct.h \

SRCS		=	$(addprefix srcs/, $(SRCS_NAME))

INC			=	$(addprefix includes/, $(INC_NAME))

OBJS		= 	$(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(LIBFT) $(INC)
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT) : 
			make -C libft all

clean :
			rm -f $(OBJS)
			make -C libft clean

fclean :	clean
			rm -f $(NAME)
			rm -f .history
			make -C libft fclean

re: fclean all
