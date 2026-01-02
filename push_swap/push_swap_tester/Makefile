CC            := gcc
CFLAGS        := -Wall -Wextra -Werror
NAME          := ops_tester
SRC           := $(wildcard ./*.c)
PUSHSWAPDIR   := ..
PUSHWAPOBJ    := $(PUSHSWAPDIR)/*.o
OBJ           := ${SRC:.c=.o}


.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) $(wildcard $(PUSHSWAPDIR)/*.c) $(wildcard ../libft/*.c)

clean:
	$(MAKE) -C $(PUSHSWAPDIR) clean
	rm -f $(OBJ)

fclean: clean
	$(MAKE) -C $(PUSHSWAPDIR) fclean
	rm -f $(NAME)

re: fclean all
