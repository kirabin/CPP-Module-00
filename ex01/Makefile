NAME = phonebook
FLAGS = -Wall -Wextra -Werror
SRC = Contact.cpp Phonebook.cpp main.cpp
INC = Contact.hpp Phonebook.hpp
OBJ = $(SRC:.cpp=.o)

RED = \033[31m
GREEN = \033[32m
ORANGE = \033[93m
NO_COLOR = \033[0m

all: $(NAME)

shout_assemble:
	@echo "$(GREEN)Assembling$(NO_COLOR)"

shout_clean:
	@echo "$(RED)Cleaning$(NO_COLOR)"

shout_test:
	@echo "$(ORANGE)Testing$(NO_COLOR)"

%.o: %.cpp $(INC)
	clang++ $(FLAGS) -o $@ -c $<

$(NAME):  $(OBJ)
	@make shout_assemble
	clang++ $(FLAGS) -o $(NAME) $(OBJ)

clean: shout_clean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
