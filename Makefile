NAME = libftprintf.a
FLAGS = -Werror -Wextra -Wall
RM = rm -rf
SRCS =	ft_printf.c\
		ft_printf_utils.c\
		ft_printf_hexa.c\

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o:
	cc $(FLAGS) -c -o $@ $<

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
