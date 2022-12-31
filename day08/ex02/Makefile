NAME = stl

SRCS = main.cpp

CFLAGS = #-std=c++98 -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(SRCS)
	c++ -g $(CFLAGS) $(SRCS) -o $(NAME)
clean : fclean

fclean :
	rm -f $(NAME)

re : fclean all
.PHONY: clean all clean re