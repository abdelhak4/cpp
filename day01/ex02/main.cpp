#include <iostream>


int main( void )
{
	std::string		data =  "HI THIS IS BRAIN";
	std::string&	stringREF = data;
	std::string*	stringPTR = &data;

	std::cout << "data address $: " << &data << std::endl;
	std::cout << "stringREF address $: " << &stringREF << std::endl;
	std::cout << "stringPTR address $: " << &stringPTR << std::endl;

	std::cout << "------------------------------" << std::endl;

	std::cout << "data value $: " << data << std::endl;
	std::cout << "stringREF value $: " << stringREF << std::endl;
	std::cout << "stringPTR value $: " << *stringPTR << std::endl;
}
