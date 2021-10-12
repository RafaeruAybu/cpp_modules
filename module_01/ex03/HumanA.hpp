#ifndef MODULE_01_EX03_HUMANA_HPP
#define MODULE_01_EX03_HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack() const;
private:
	Weapon &weapon;
	std::string name;
};

#endif