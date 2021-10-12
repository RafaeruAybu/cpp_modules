#ifndef MODULE_01_EX03_HUMANB_HPP
#define MODULE_01_EX03_HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string name);
	~HumanB();
	void attack() const;
	void set_weapon(Weapon &weapon);
private:
	Weapon *weapon;
	std::string name;
};

#endif