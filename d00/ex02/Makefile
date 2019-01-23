C		=	clang++
FLAGS	=	-Wall -Wextra -Werror

NAME	=	account
RES		=	resources/
SRC		=	Account.class.cpp \
			$(RES)tests.cpp
OBJ		=	$(SRC:.cpp=.o)
INC		=	-I $(RES)


all: $(NAME)

$(NAME): $(OBJ)
	$(C) -o $(NAME) $(FLAGS) $(OBJ)

%.o: %.cpp
	$(C) $(INC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
