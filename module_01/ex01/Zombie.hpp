#ifndef MODULE_01_EX01_ZOMBIE_HPP
#define MODULE_01_EX01_ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie();
	~Zombie();
	void announce();
	void set_name(std::string str);
private:
	std::string _name;
};

#endif