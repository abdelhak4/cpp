NAME = FIXED
SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(CFLAGS) $(SRCS) -o $(NAME)
clean : fclean

fclean :
	rm -f $(NAME)

re : fclean all
.PHONY: clean all clean re fclean