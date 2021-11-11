#include "my_phonebook.hpp"

int main()
{
	std::string str;
	Phonebook phonebook;
	
	while (1)
	{
		std::cout << "Write an command:" << std::endl;
		if ( ! std::getline(std::cin, str))
			std::exit(0);
		if (str == "ADD")
		{
			phonebook.add();
		}
		else if (str == "SEARCH")
		{
			phonebook.search();
		}
		else if (str == "EXIT")
		{
			std::cout << "Bye-bye!" << std::endl;
			return (0);
		}
		else
			std::cout << "Wrong command! Try again." << std::endl;
	}
	return (0);
}
