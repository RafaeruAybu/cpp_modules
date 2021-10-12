#ifndef MODULE_01_EX03_WEAPON_HPP
#define MODULE_01_EX03_WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
public:
	Weapon(std::string type);
	~Weapon();
	const std::string &getType() const;
	void setType(std::string type);
private:
	std::string type;
};

#endif