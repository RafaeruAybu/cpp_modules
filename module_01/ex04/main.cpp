#include <string>
#include <iostream>
#include <fstream>
#include "Replacer.hpp"

static int check_arguments(int argc, char *argv[]) {
	if (argc != 4)
		return 1;
	if (!*argv[1] || !*argv[2]) {
		std::cout << "Some string is empty!" << std::endl;
		return 1;
	}
	return 0;
}

static void do_replace(char *argv[]) {
	std::ifstream f_in;
	std::ofstream f_out;
	std::string out_file_name = argv[1];
	std::string to_find_str = argv[2];
	std::string to_replace_str = argv[3];
	std::string current;
	std::string changed;
	size_t index;
	f_in.open(out_file_name, std::fstream::in);
	if (!f_in.is_open())
	{
		std::cout << "Cant open some file!" << std::endl;
		return ;
	}
	f_out.open(out_file_name + ".replace", std::ofstream::out | std::ofstream::trunc);
	if (!f_out.is_open())
	{
		std::cout << "Cant open some file!" << std::endl;
		return ;
	}
	while (!f_in.eof())
	{
		std::getline(f_in, current);
		index = current.find(to_find_str);
		while (index != std::string::npos)
		{
			//wtf ???
			changed = current.substr(0, index) + to_replace_str + current.substr(index
					+ to_find_str.length());
			current = changed;
			index = current.find(to_find_str, index + 1);
		}
		f_out << current << std::endl;
	}
	f_in.close();
	f_out.close();
}

int main(int argc, char *argv[]) {
	if(check_arguments(argc, argv)) {
		std::cout << "Envalid Args!" << std::endl;
		return (-1);
	}
	do_replace(argv);
	return 0;
}