# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsampaio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 14:40:49 by tsampaio          #+#    #+#              #
#    Updated: 2022/10/15 00:53:58 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

SRCS = ft_split.c ft_itoa.c ft_strchr.c ft_strdup.c \
		ft_strjoin.c ft_strmapi.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_atoi.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcmp.c ft_strncmp.c ft_tolower.c ft_toupper.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_calloc.c \
		ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_bzero.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_striteri.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

clean:
	$(REMOVE) $(OBJS)

%.o: %.c
	gcc -c $(FLAGS) $< -o $@
	ar -rcs $(NAME) $@

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all
