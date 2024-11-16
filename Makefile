# Nome do programa
NAME = libftprintf.a

# Compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Arquivos fontes
SRC = ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_unsigned.c ft_putstr.c ft_print_hexa.c ft_voidpoint.c
OBJ = $(SRC:.c=.o)

# Arquivo de teste
TEST_SRC = main.c
TEST_OBJ = $(TEST_SRC:.c=.o)
TEST_NAME = test_ftprintf

# Regras padrão
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Regra para compilar o programa de teste
test: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) -L. -lftprintf -o $(TEST_NAME)

# Limpeza
clean:
	rm -f $(OBJ) $(TEST_OBJ)

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean all
