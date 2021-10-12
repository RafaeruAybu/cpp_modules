#include "Zombie.hpp"

Zombie::Zombie() {
	this->_name = "Undefined_name";
}

Zombie::~Zombie() {
	std::cout << _name << " " << "destructed" << std::endl;
}

void Zombie::announce() {
	std::cout << _name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string str) {
	_name = str;
}