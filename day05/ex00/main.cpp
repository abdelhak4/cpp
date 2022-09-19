//
// Created by Abdelhak El moussaoui on 9/15/22.
//

#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat b("ok", 1);
		std::cout << b << std::endl;
		b.increment();
		std::cout << b << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}