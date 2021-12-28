# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asippy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/23 21:41:48 by asippy            #+#    #+#              #
#    Updated: 2021/12/28 04:24:12 by asippy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

HEADER		= include/ft_printf.h

HEADER_OPT	= include/ft_printf_bonus.h

SRCS		= source/ft_printf.c\
			  source/ft_char.c\
			  source/ft_string.c\
			  source/ft_pointer.c\
			  source/ft_signed_int.c\
			  source/ft_unsigned_int.c\
			  source/ft_hex.c\
			  source/ft_anything.c\
			  source/ft_printf_utils_strings.c\
			  source/ft_printf_utils_hexs.c\
			  source/ft_printf_utils_ints.c

SRCS_OPT	= source/ft_printf_bonus.c\
			  source/ft_char_bonus.c\
			  source/ft_string_bonus.c\
			  source/ft_pointer_bonus.c\
			  source/ft_signed_int_bonus.c\
			  source/ft_unsigned_int_bonus.c\
			  source/ft_hex_bonus.c\
			  source/ft_anything_bonus.c\
			  source/ft_printf_utils_strings_bonus.c\
			  source/ft_printf_utils_hexs_bonus.c\
			  source/ft_printf_utils_ints_bonus.c

OBJS		= $(patsubst %.c, %.o, $(SRCS))

OBJS_OPT	= $(patsubst %.c, %.o, $(SRCS_OPT))

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra

OPTFLAGS	= -O2

%.o:		%.c $(if $(findstring bonus, $(MAKECMDGOALS)), $(HEADER_OPT), $(HEADER))
			$(CC) $(OPTFLAGS) $(CFLAGS) -c $< -o $@

$(NAME):	$(if $(findstring bonus, $(MAKECMDGOALS)), $(OBJS_OPT), $(OBJS))
			make all -C ./libft
			make bonus -C ./libft
			cp ./libft/libft.a $(NAME)
			ar rcs $(NAME) $?

all:		$(NAME)

bonus:		$(NAME)

clean:
			make clean -C ./libft
			$(RM) $(OBJS) $(OBJS_OPT)

fclean:		clean
			make fclean -C ./libft
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re