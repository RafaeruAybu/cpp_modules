#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie *tmp_ptr;

	tmp_ptr = new Zombie(name);
	return tmp_ptr;
}