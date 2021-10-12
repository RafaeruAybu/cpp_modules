#ifndef MODULE_01_EX00_ZOMBIEHORDE_HPP
#define MODULE_01_EX00_ZOMBIEHORDE_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde{
public:
	ZombieHorde();
	~ZombieHorde();
	Zombie* zombieHorde(int N, std::string name);
	void announce();
private:
	std::string _horde_name;
};

#endif