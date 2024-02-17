# Define the name of the library and compiler
NAME = libft.a
CC = gcc

# Compiler flags to enforce warnings as errors
CFLAGS = -Wall -Wextra -Werror

# Find all source files in the current directory (excluding ft_lst*.c files)
SRC = $(wildcard *.c)

# Find all bonus source files (ft_lst*.c files)
BONUS = $(wildcard ft_lst*.c)

# Generate object file names from source file names
OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

# Default target: build the library
all: $(NAME)

# Rule to compile a .c file into a .o file
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Rule to create the library from object files
$(NAME): $(OBJ)
	@ar rc $(NAME) *.o

# Bonus rule: add bonus object files to the library
bonus: $(OBJ) $(BONUS_OBJ)
	@ar rc $(NAME) *.o

# Clean rule: remove object files
clean:
	@rm -f *.o

# Full clean rule: remove object files and the library
fclean: clean
	@rm -f $(NAME)

# Rule to recompile everything from scratch
re: fclean all

# Phony targets to prevent conflicts with file names
.PHONY: all bonus clean fclean re


