# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfuster <jfuster@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/23 16:30:25 by jfuster           #+#    #+#              #
#    Updated: 2019/04/16 15:55:42 by jfuster          ###   ########.fr        #
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
		srcs/ft_isspace_bonus.s

SRCO = $(SRCS:.s=.o)

SRCS_TEST = tests/main.c \
			tests/test_bzero.c \
			tests/test_cat.c \
			tests/test_isalnum.c \
			tests/test_isascii.c \
			tests/test_isdigit.c \
			tests/test_isalpha.c \
			tests/test_memcpy.c \
			tests/test_memset.c \
			tests/test_puts.c \
			tests/test_strcat.c \
			tests/test_strdup.c \
			tests/test_strlen.c \
			tests/test_tolower.c \
			tests/test_toupper.c

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
