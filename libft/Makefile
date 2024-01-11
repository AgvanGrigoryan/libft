CC = cc
CFLAGS = -Wall -Wextra -Werror

LIB_NAME = libft.a
SRC_DIR = .
INC_DIR = .
SOURCES = $(SRC_DIR)/ft_isalpha.c $(SRC_DIR)/ft_isdigit.c $(SRC_DIR)/ft_isalnum.c $(SRC_DIR)/ft_isascii.c $(SRC_DIR)/ft_isprint.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_memset.c $(SRC_DIR)/ft_bzero.c $(SRC_DIR)/ft_memcpy.c $(SRC_DIR)/ft_memmove.c $(SRC_DIR)/ft_strlcpy.c $(SRC_DIR)/ft_strlcat.c $(SRC_DIR)/ft_toupper.c $(SRC_DIR)/ft_tolower.c $(SRC_DIR)/ft_strchr.c $(SRC_DIR)/ft_strncmp.c $(SRC_DIR)/ft_memchr.c $(SRC_DIR)/ft_memcmp.c $(SRC_DIR)/ft_strnstr.c $(SRC_DIR)/ft_atoi.c $(SRC_DIR)/ft_calloc.c $(SRC_DIR)/ft_strdup.c $(SRC_DIR)/ft_substr.c $(SRC_DIR)/ft_strjoin.c $(SRC_DIR)/ft_strtrim.c $(SRC_DIR)/ft_split.c $(SRC_DIR)/ft_itoa.c $(SRC_DIR)/ft_strmapi.c $(SRC_DIR)/ft_striteri.c $(SRC_DIR)/ft_putchar_fd.c 
#$(SRC_DIR)/ft_$(SRC_DIR)/ft_$(SRC_DIR)/ft_$(SRC_DIR)/ft_$(SRC_DIR)/ft_$(SRC_DIR)/ft_$(SRC_DIR)/ft_$(SRC_DIR)/ft_$(SRC_DIR)/ft_$(SRC_DIR)/ft_$(SRC_DIR)/ft_

OBJECTS = $(SOURCES:.c=.o)
	
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
