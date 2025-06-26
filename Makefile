CC 		= cc

NAME 	= libft.a

FLAGS 	= -Werror -Wextra -Wall -g3 -I./include
RM		= rm -f

SRC_DIR	= sources
OBJ_DIR	= objects
INC_DIR	= includes

SRC		= $(shell find $(SRC_DIR) -name "*.c")
OBJ		= $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

DEPS	= $(OBJ:.o=.d)

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

$(NAME): $(MLX_LIB) $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "L3t'5 g3T th15 p@rTy 5T@rt!ng R1gHT"

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
