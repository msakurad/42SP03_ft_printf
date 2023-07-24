
NAME := libftprintf.a
CCFLAGS := -Wall -Wextra -Werror
COMPILE := cc -c
LINK_LIB := ar rcs
LINK_EXE := cc

PATH_SRC_PROJ := ./src_project
PATH_SRC := $(PATH_SRC_PROJ)/srcs/
PATH_INCLUDE := $(PATH_SRC_PROJ)/includes/
PATH_LIB := ./lib_project/
PATH_TEST := ./test_project/
PATH_BUILD := ./build_project/
PATH_UNITY := ./Unity/src/

INCLUDE_PROJ := -I $(PATH_INCLUDE)
INCLUDE_TEST := -I $(PATH_TEST) -I $(PATH_UNITY)

SRC_FILES = ft_printf.c ft_putchar.c ft_putstr.c
SRC := $(addprefix $(PATH_SRC), $(SRC_FILES))
OBJ = $(SRC:.c=.o)

TEST_MANDATORY_FILES := test_all.c test_ft_putstr.c
TEST_MANDATORY := $(addprefix $(PATH_TEST), $(TEST_MANDATORY_FILES))
UNITY := $(PATH_UNITY)unity.c

all: $(NAME)
lib: $(NAME)

$(NAME): $(OBJ)
	$(LINK_LIB) $(PATH_LIB)$@ $^

%.o: %.c
	$(COMPILE) $(CCFLAGS) $(INCLUDE_PROJ) -c $< -o $@

m:
	$(LINK_EXE) $(CC_FLAGS) $(TEST_MANDATORY) $(UNITY) \
	-lftprintf -L$(PATH_LIB) $(INCLUDE_TEST) \
	-o $(PATH_BUILD)$@
	./$(PATH_BUILD)$@

# b: $(BONUS)
# $(BONUS):

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(PATH_BUILD)* $(PATH_LIB)/*.a

re: fclean all

.PHONY: all clean fclean re
