
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>


void	ft_replace(std::string file, std::string from, std::string to)
{
	std::ofstream ouf;
	std::ifstream inf;

	inf.open(file);
	file += ".replace";
	ouf.open(file);
	if (!inf || !ouf)
	{
		std::cerr << "Could not be opened the file " << std::endl;
		return ;
	}
	std::string str;
	while (getline(inf, str))
	{
		while (true)
		{
			size_t	pos = str.find(from);
			if (pos != std::string::npos)
			{
				str.erase(pos, from.length());
				str.insert(pos, to);
			}
			else
				break ;
		}
		ouf << str;
		if (!inf.eof())
			ouf << '\n';
	}
	ouf << '\n';
	inf.close();
}

int	main(int ac, char **av)
{
	if (ac - 1 != 3)
	{
		std::cout << "bad number of arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	ft_replace(av[1], av[2], av[3]);
	return (EXIT_SUCCESS);
}