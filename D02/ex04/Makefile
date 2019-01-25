NAME = eval_expr

SRC_PATH = #classes/
INC_PATH = ./
OBJ_PATH = obj/

C = clang++
WFLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic -pedantic-errors
IFLAGS = -I $(INC_PATH)
LFLAGS = 

FILES = main
CLASSES = Fixed

SRCS = $(addprefix $(SRC_PATH), $(addsuffix .cpp, $(FILES)))
SRCS += $(addprefix $(SRC_PATH), $(addsuffix .class.cpp, $(CLASSES)))
OBJ = $(addprefix $(OBJ_PATH), $(SRCS:%.cpp=%.o))


all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(WFLAGS) $(LFLAGS) $(IFLAGS) $(OBJ) -o $(NAME)

$(OBJ): | $(OBJ_PATH)

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)$(SRC_PATH)$(MODULES_PATH)

$(OBJ_PATH)%.o: %.cpp
	$(C) $(WFLAGS) $(IFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)
	rm -rf $(OBJ_PATH)

re: fclean all

.PHONY: all clean fclean re
