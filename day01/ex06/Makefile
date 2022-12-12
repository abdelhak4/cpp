FILES = main.cpp Harl.cpp

NAME = harlFilter

CFLAGS = -std=c++98 -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(FILES)
	c++ $(CFLAGS) $(FILES) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all