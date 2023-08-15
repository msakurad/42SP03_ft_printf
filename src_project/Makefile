
NAME := libftprintf.a
CC_FLAGS := -Wall -Wextra -Werror

PATH_SRC := ./srcs/
PATH_OBJ := ./objs/
PATH_INCLUDE := ./includes/

INCLUDE_HEADER := -I $(PATH_INCLUDE)

SRC_FILES := ft_printf.c \
	ft_putchar.c ft_putnbr_base.c \
	ft_putnbr.c ft_putptr.c ft_putstr.c

SRC := $(addprefix $(PATH_SRC), $(SRC_FILES))
OBJ := $(SRC:$(PATH_SRC)%.c=$(PATH_OBJ)%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

$(PATH_OBJ):
	@mkdir $@

$(OBJ): | $(PATH_OBJ)

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	cc $(CC_FLAGS) $(INCLUDE_HEADER) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -fd $(PATH_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re