#include "Karen.hpp"

static int get_num_of_string(std::string level)
{
	int i = 0;
	std::string str_array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int x = 0; x < 4; x++)
	{
		if (str_array[x] == level)
		{
			i = x;
			break ;
		}
		else if (x == 3)
			return -1;
	}
	return i;
}

int main(int argc, char *argv[])
{
	Karen instance;

	if (argc != 2)
	{
		std::cout << "Argument error! Write an argument." << std::endl;
		return 1;
	}
	int i = get_num_of_string(argv[1]);
//    if (i < 0)
//    {
//        std::cout << "Level is not found!" << std::endl;
//        return 0;
//    }
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			instance.complain("debug");
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			instance.complain("info");
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			instance.complain("warning");
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			instance.complain("error");
			std::cout << std::endl;
			break ;
		default:
			std::cout << "Level is not found!" << std::endl;
	}
	return 0;
}
