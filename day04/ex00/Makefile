NAME = animal
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp

CFLAGS = -std=c++98 -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)
clean : fclean

fclean :
	rm -f $(NAME)

re : fclean all
.PHONY: clean all clean re fclean