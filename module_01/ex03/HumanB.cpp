#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {
	weapon = NULL;
}

HumanB::~HumanB() {}

void HumanB::attack() const {
	if (weapon)
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
	else
		std::cout << name << " doesn't have any weapon!" << std::endl;
}

void HumanB::set_weapon(Weapon &weapon) {
	this->weapon = &weapon;
}