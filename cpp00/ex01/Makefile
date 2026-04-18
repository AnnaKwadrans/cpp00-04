CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 
NAME = phonebook
RM = rm -f

SRC = main.cpp phonebook.cpp phonebook_search.cpp contact.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: all clean fclean re

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all
