#include "Karen.hpp"

void Karen::complain(std::string level)
{
	//array of f. pointers
	void (Karen::*f[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	//get the position number of string
	int i = 0;
	std::string str_array[] = {"debug", "info", "warning", "error"};
	for (int x = 0; x < 4; x++)
	{
		if (str_array[x] == level)
		{
			i = x;
			break ;
		}
		else if (x == 3)
			return ;
	}
	//execute the i's foo through the given pointer
	(this->*f[i])();
}

void Karen::debug()
{
	std::cout << "I love to get extra bacon\n"
				 "for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
				 << std::endl;
}

void Karen::info()
{
	std::cout << "I cannot believe adding extra\n"
				 "bacon cost more money. You don’t put enough! If you did I would not have to ask\n"
				 "for it!" << std::endl;
}

void Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\n"
				 "coming here for years and you just started working here last month."
				 << std::endl;
}

void Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
