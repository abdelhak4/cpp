NAME = animal
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp Brain.cpp

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(SRCS)
	c++ -g $(CFLAGS) $(SRCS) -o $(NAME)
clean : fclean

fclean :
	rm -f $(NAME)

re : fclean all
.PHONY: clean all clean re fclean