SRCS = \
ft_printc.c ft_printf.c ft_printxx.c ft_printdi.c \
ft_printp.c ft_prints.c ft_printu.c

OBJS = $(SRCS:.c=.o)


NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean $(NAME)

compile: all
	cc $(FLAGS) main.c -l $(NAME)

.PHONY : all clean flcean re bonus