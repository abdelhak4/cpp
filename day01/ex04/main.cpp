
#include <iostream>
#include <string>
#include <fstream>

void	ft_replace(std::string file, std::string from, std::string to)
{
	std::ofstream ouf;
	std::ifstream inf;

	inf.open(file);
	if (!inf.is_open())
	{
		std::cout << "file not exist\n";
		return ;
	}
	file += ".replace";
	ouf.open(file);
	if (!ouf)
	{
		std::cerr << "Could not be opened the file " << std::endl;
		return ;
	}
	std::string str;
	while (getline(inf, str))
	{
        std::cout << str << std::endl;
		while (true)
		{
			size_t	pos = str.find(from);
            std::cout << "pos :" << pos << std::endl;
            std::cout << "npos :" << std::string::npos << std::endl;
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