#include <iostream>


int main(int ac, char **av)
{
	size_t j;
	size_t n;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (size_t i = 1; i < (size_t )ac; i++)
		{
			n = std::strlen(av[i]);
			j = 0;
			while (j < n){
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
