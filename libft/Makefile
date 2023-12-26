CC = cc
CFLAGS = -Wall -Wextra -Werror

LIB_NAME = libft.a
SRC_DIR = .
INC_DIR = .
SOURCES = $(shell find $(SRC_DIR) -name 'ft_*.c')
OBJECTS = $(SOURCES:$(SRC_DIR)/%.c=%.o)

all: $(LIB_NAME)

$(LIB_NAME): $(OBJECTS)
	ar rcs $(LIB_NAME) $^

%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $^ -I$(INC_DIR) -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all

.PHONY: all clean fclean re
