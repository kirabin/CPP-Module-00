NAME = megaphone
FLAGS = -Wall -Wextra -Werror
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

RED = \033[31m
GREEN = \033[32m
ORANGE = \033[93m
NO_COLOR = \033[0m

all: $(NAME)

%.o: %.cpp
	clang++ $(FLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@echo "$(GREEN)Assembling$(NO_COLOR)"
	clang++ $(FLAGS) -o $(NAME) $(OBJ)

clean:
	@echo "$(RED)Cleaning$(NO_COLOR)"
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

test:
	@echo "$(ORANGE)Testing$(NO_COLOR)"
	./megaphone "shhhhh... I think the students are asleep..."
	@echo
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	@echo
	./megaphone
