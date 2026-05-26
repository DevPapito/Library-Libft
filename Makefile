# TEST VARIABLES
SRC_DIR = bin
SRC_TEXT = test.c

# Makefile VARIABLES ============
NAME := libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -std=c99

RM = rm -f
AR = ar rcs

SRCS = hi.c

OBJS = $(SRCS:.c=.o)

# COMMANDS ============
all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS) -o $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

code:
	@echo "============================\n"
	@echo  "status: Code created!\n"
	@echo "============================\n"
	@echo "test.c created of sucess!\n"
	@echo "#include \"libft.h\"\nint main (void)\n{\n\n  return(0);\n}" > test.c

test: $(NAME)
	@echo "============================\n"
	@echo  "status: Test genereted!\n"
	@echo "============================\n"
	@echo "./program_test.out created of sucess!\n"
	@$(AR) $(NAME) $(OBJS) -o $(NAME)
	@$(CC) $(SRC_TEXT) -L. -lft -o program_test
	@mkdir $(SRC_DIR)
	@mv *.o bin/

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
	@rm -rf $(SRC_DIR)
	@rm -rf program_test test.c
	@echo "============================\n"
	@echo  "status: Fclean activeted\n"
	@echo "============================\n"
	@echo "All binary files excluded"

re: fclean all

.PHONY: all clean fclean re

