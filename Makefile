NAME	= libftprintf.a
SRCS	= ft_printf.c ft_puthex.c ft_putnbrs.c ft_putstrs.c
OBJS	= $(SRCS:.c=.o)
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= rm -f

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@
	
$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:		fclean all

