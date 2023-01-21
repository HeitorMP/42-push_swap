#Programs Name
BIN = push_swap

#libft Variables
LIBFT		=	./libft/libft.a
LIBFT_DIR	=	./libft

#Sources Variables
SRCS		=	push_swap.c \
				srcs/utils.c srcs/push.c srcs/swap.c srcs/rotate.c srcs/rotate_reverse.c srcs/temp_utils.c

INCLUDES	=	-I. -I$(LIBFT_DIR)

#Compilation
CC			=	cc
CFLAG		=	-g -Wall -Wextra -Werror
RM			=	rm -f

all: $(BIN)

$(BIN): $(LIBFT)
	@ $(CC) $(CFLAG) $(SRCS) $(LIBFT) $(INCLUDES) -o $(BIN)

$(LIBFT):
	@ $(MAKE) -C ./libft

clean:
	@ $(RM) $(BIN)

fclean:
	@ $(MAKE) fclean -C $(LIBFT_DIR)
	@ $(RM) $(BIN)

re: fclean all

.SILENT:
.PHONY: all clean fclean re mandatory m bonus b
