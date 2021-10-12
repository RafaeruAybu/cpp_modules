#include <string>
#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;
	//string address
	std::cout << "String mem address: " << &str << std::endl;
	//stringREF address
	std::cout << "String mem address through pointer: " << stringPTR << std::endl;
	//stringPTR address
	std::cout << "String mem address through reference: " << &stringREF << std::endl;
	//values
	std::cout << "String through pointer: " << *stringPTR << std::endl;
	std::cout << "String through reference: " << stringREF << std::endl;
	return 0;
};