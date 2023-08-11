
NAME := libftprintf.a
CCFLAGS := -Wall -Wextra -Werror
COMPILE := cc -c
LINK_LIB := ar rcs
LINK_EXE := cc

PATH_SRC_PROJ := ./src_project
PATH_SRC := $(PATH_SRC_PROJ)/srcs/
PATH_INCLUDE := $(PATH_SRC_PROJ)/includes/
PATH_OBJ := $(PATH_SRC_PROJ)/objs/
PATH_LIB := ./lib_project/
PATH_TEST := ./test_project/
PATH_BUILD := ./build_project/
PATH_UNITY := ./Unity/src/

INCLUDE_PROJ := -I $(PATH_INCLUDE)
INCLUDE_TEST := -I $(PATH_TEST) -I $(PATH_UNITY)

SRC_FILES := ft_printf.c \
	ft_putchar.c ft_putstr.c ft_putptr.c \
	ft_putnbr_base.c ft_putnbr.c 
SRC := $(addprefix $(PATH_SRC), $(SRC_FILES))
OBJ := $(SRC:$(PATH_SRC)%.c=$(PATH_OBJ)%.o)

TEST_ALLFUNCTIONS_FILES := test_all.c test_ft_putstr.c
TEST_ALLFUNCTIONS := $(addprefix $(PATH_TEST), $(TEST_ALLFUNCTIONS_FILES))
UNITY := $(PATH_UNITY)unity.c

all: $(NAME)
lib: $(NAME)

$(NAME): $(OBJ)
	@$(LINK_LIB) $(PATH_LIB)$@ $^

$(PATH_OBJ):
	@mkdir $@

$(OBJ): | $(PATH_OBJ)

$(PATH_OBJ)%.o: $(PATH_SRC)%.c
	@$(COMPILE) $(CCFLAGS) $(INCLUDE_PROJ) -c $< -o $@

ft:
	@$(LINK_EXE) $(CC_FLAGS) $(PATH_TEST)test_ft_printf.c \
	-lftprintf -L $(PATH_LIB) $(INCLUDE_PROJ) \
	-o $(PATH_BUILD)$@
	@./$(PATH_BUILD)$@

test_%.c:
	@$(LINK_EXE) $(CC_FLAGS) $@ $(UNITY) \
	-lftprintf -L$(PATH_LIB) $(INCLUDE_PROJ) $(INCLUDE_TEST) \
	-o $(PATH_BUILD)$@
	@./$(PATH_BUILD)$@

# b: $(BONUS)
# $(BONUS):

clean:
	@rm -f $(OBJ)
	@rm -fd $(PATH_OBJ)

fclean: clean
	@rm -f $(PATH_BUILD)* $(PATH_LIB)/*.a

re: fclean all

.PHONY: all lib clean fclean re ft test
