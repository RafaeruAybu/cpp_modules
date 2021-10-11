#ifndef MODULE_01_EX00_ZOMBIE_HPP
#define MODULE_01_EX00_ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

public:
	Zombie();
	~Zombie();

	void setNameHorde(const std::string &nameHorde);

	void announce();
	void setName(std::string &name);

private:
	std::string _name;
	std::string _nameHorde;
};

Zombie* zombieHorde( int N, std::string name );

#endif