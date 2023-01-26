#Programs Name
BIN = push_swap

#libft Variables
LIBFT		=	./libft/libft.a
LIBFT_DIR	=	./libft

#Sources Variables
SRCS		=	push_swap.c \
				srcs/resources/lst_utils.c srcs/resources/lst_utils2.c srcs/resources/print_stacks.c \
				srcs/resources/sort_utils.c \
				srcs/moves/push.c srcs/moves/swap.c srcs/moves/rotate.c srcs/moves/rotate_reverse.c \
				srcs/sort/sort_router.c srcs/sort/radix_sort.c \
				srcs/init_stacks/init_stacks.c srcs/init_stacks/check_errors.c srcs/init_stacks/check_params.c \
				srcs/init_stacks/init_with_array.c srcs/init_stacks/init_with_params.c

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
