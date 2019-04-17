# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jessyefuster <jessyefuster@student.42.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/23 16:30:25 by jfuster           #+#    #+#              #
#    Updated: 2019/04/17 14:19:24 by jessyefuster     ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a

TEST = testing

NASM = ~/.brew/bin/nasm

CC = gcc

SRCS =	srcs/ft_bzero.s \
		srcs/ft_cat.s \
		srcs/ft_isalnum.s \
		srcs/ft_isalpha.s \
		srcs/ft_isascii.s \
		srcs/ft_isdigit.s \
		srcs/ft_isprint.s \
		srcs/ft_memcpy.s \
		srcs/ft_memset.s \
		srcs/ft_puts.s \
		srcs/ft_strcat.s \
		srcs/ft_strdup.s \
		srcs/ft_strlen.s \
		srcs/ft_tolower.s \
		srcs/ft_toupper.s \
		srcs/ft_isspace.s \
		srcs/ft_islower.s \
		srcs/ft_isupper.s \
		srcs/ft_isblank.s \
		srcs/ft_iscntrl.s

SRCO = $(SRCS:.s=.o)

SRCS_TEST = tests/main.c \
			tests/test_bzero.c \
			tests/test_cat.c \
			tests/test_isalnum.c \
			tests/test_isascii.c \
			tests/test_isdigit.c \
			tests/test_isalpha.c \
			tests/test_isprint.c \
			tests/test_memcpy.c \
			tests/test_memset.c \
			tests/test_puts.c \
			tests/test_strcat.c \
			tests/test_strdup.c \
			tests/test_strlen.c \
			tests/test_tolower.c \
			tests/test_toupper.c \
			tests/test_isspace.c \
			tests/test_islower.c \
			tests/test_isupper.c \
			tests/test_isblank.c \
			tests/test_iscntrl.c

SRCO_TEST = $(SRCS_TEST:.c=.o)

%.o:%.s
	$(NASM) -f macho64 $< -o $@

%.o:%.c
	$(CC) -c $< -o $@


all: $(NAME)

$(NAME): $(SRCO)
	ar -rc $(NAME) $(SRCO)
	ranlib $(NAME)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all

tests: $(NAME) test

test: $(SRCO_TEST)
	$(CC) $(NAME) $(SRCO_TEST) -o $(TEST)
