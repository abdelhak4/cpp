NAME = animal
SRCS = main.cpp Bureaucrat.cpp Form.cpp

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(SRCS)
	c++ -g $(CFLAGS) $(SRCS) -o $(NAME)
clean : fclean

fclean :
	rm -f $(NAME)

re : fclean all
.PHONY: clean all clean re fclean