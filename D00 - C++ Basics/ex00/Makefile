C		=	clang++
FLAGS	=	-Wall -Wextra -Werror

NAME	=	megaphone
SRC		=	megaphone.cpp
OBJ		=	$(SRC:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(C) $(FLAGS) -o $(NAME) $(OBJ)

# A two-suffix rule whose target and source suffixes are ‘.o’ and ‘.c’ is equivalent to the pattern rule ‘%.o : %.c’.
# $@ The file name of the target of the rule.
# $< The name of the first prerequisite.
# They are used to build rules that can be applied to different targets so that one does not need to repeat the same rule for each and every file that must be worked on.

%.o: %.c
	$(C) $(FLAGS) -c $@ -o $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
