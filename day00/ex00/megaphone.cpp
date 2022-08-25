#include <iostream>


int main(int ac, char **av)
{
	size_t j = 0;
	size_t n;
	if (ac == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else {
		for (int i = 1; i < ac; i++) {
			n = std::strlen(av[i]);
			while (j < n){
				std::cout << (char)std::toupper(av[i][j]);
				j++;
			}
		}
		std::cout << std::endl;
	}
	return 0;
}
