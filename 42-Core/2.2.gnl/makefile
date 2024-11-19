
CC = gcc
CFLAGS = -Wall -Wextra -Werror


SRC = get_next_line.c \
      get_next_line_utils.c
OBJ = $(SRC:.c=.o)


NAME = get_next_line.a


all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "Library $(NAME) created!"

%.o: %.c get_next_line.h
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "Object files removed."

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

re: fclean all
	@echo "Recompiled everything!"

.PHONY: all clean fclean re
