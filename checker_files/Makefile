# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gregoire <gregoire@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/30 19:54:49 by gregoire          #+#    #+#              #
#    Updated: 2021/03/30 19:54:49 by gregoire         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	checker

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

LIBFT		=	libft/libft.a

SRCS_NAME	=	main/main.c \
				main/checker.c \
				main/exec_ope.c \
				main/ft_setup.c \
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
				parsing/parse_argv.c \
				parsing/parse_dup.c \
				parsing/parse_ope.c \
				read/read_ope.c \
				struct/ft_lstdata_utils.c \

INC_NAME	= 	checker.h \
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
