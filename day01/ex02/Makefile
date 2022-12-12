FILES = main.cpp

EXEC = Brain

CFLAGS = -std=c++98 -Wall -Werror -Wextra

all : $(EXEC)

$(EXEC) : $(FILES)
	c++ $(CFLAGS) $(FILES) -o $(EXEC)

clean :
	rm -rf $(EXEC)

fclean : clean

re : clean all