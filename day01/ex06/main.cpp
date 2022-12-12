#include "Harl.hpp"


int main( int ac, char **av )
{
	Harl harl;
	if (ac > 1)
		harl.harlFilter(av[1]);
	return (0);
}
