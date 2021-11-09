#include "my_phonebook.hpp"

int main()
{
	std::string str;
	Phonebook phonebook;
	
	while (1)
	{
		std::cout << "Write an command:" << std::endl;
		std::cin >> str;
		if (str.compare("ADD") == 0)
		{
			phonebook.add();
		}
		else if (str.compare("SEARCH") == 0)
		{
			phonebook.search();
		}
		else if (str.compare("EXIT") == 0)
		{
			std::cout << "Bye-bye!" << std::endl;
			return (0);
		}
		else
			std::cout << "Wrong command! Try again." << std::endl;
	}
	return (0);
}

//int main()
//{
//
//	while (1)
//	{
//		Phonebook pb;
//		if ("EXIT")
//		{
//			return (0);
//		}
//		else if ("ADD")
//		{
//
//		}
//		else if ("SEARCH")
//		{
//
//		}
//		else
//		{
//			//discard, repeat loop
//		}
//	}
//	return 0;
//}
