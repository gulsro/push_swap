NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ./operations/pop_up.c \
      ./operations/reverse_rotate.c \
      ./operations/rotate.c \
      ./operations/swap.c \
      check_numbers.c \
      input_parsing.c \
      main.c \
      newsort.c \
      push_swap.c \
      utils_push_swap.c \
      error.c \
      large_sort.c

OBJ = $(SRC:.c=.o)

PRINTF_DIR = ft_printf

PRINTF = libftprintf.a

HEADER = push_swap.h

all: $(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C $(PRINTF_DIR)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(PRINTF_DIR)/$(PRINTF)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	$(MAKE) -C $(PRINTF_DIR) clean
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)
	$(MAKE) -C $(PRINTF_DIR) fclean

re:		fclean all

.PHONY: all clean fclean re
