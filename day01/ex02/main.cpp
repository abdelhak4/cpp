#include <iostream>


int main( void )
{
	std::string		value =  "HI THIS IS BRAIN";
	std::string&	stringREF = value;
	std::string*	stringPTR = &value;

	std::cout << &value << std::endl;
	std::cout << &stringREF << std::endl;
	std::cout << &stringPTR << std::endl;

	std::cout << "------------------------------" << std::endl;

	std::cout << value << std::endl;
	std::cout << stringREF << std::endl;
	std::cout << *stringPTR << std::endl;
}
