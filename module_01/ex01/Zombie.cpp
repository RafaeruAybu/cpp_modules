#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << _name << " " << "destructed" << std::endl;
}

void Zombie::announce() {
	std::cout << _name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setNameHorde(const std::string &nameHorde) {
	_nameHorde = nameHorde;
}

void Zombie::setName(std::string &name) {
	_name = name;
}
