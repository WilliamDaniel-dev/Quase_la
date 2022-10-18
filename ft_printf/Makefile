NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

SRCS = 	

OBJS 		= $(SRCS:.c=.o)

$(NAME): 	$(OBJS)
		ar -rcs $(NAME) $(OBJS)

$(OBJS):	$(SRCS)
		cc $(FLAGS) -I. -c $(SRCS)

all:		$(NAME)

clean:
		rm -rf $(OBJS)

fclean:	clean
		rm	-rf $(NAME)

re:		fclean all

.PHONY: all clean fclean re

