NAME	= libftprintf.a
SRCS	= ft_printf.c ft_puthex.c ft_putnbrs.c ft_putstrs.c
OBJS	= $(SRCS:.c=.o)
	CC	= gcc
	CFLAGS	= -Wall -Wextra -Werror
	RM	= rm -f

all: $(NAME)

$(NAME) : $(OBJS)
	@echo [COMPILANDO..]
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

