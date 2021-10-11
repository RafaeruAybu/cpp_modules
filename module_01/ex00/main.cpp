#include "Zombie.hpp"

int main(void) {
	Zombie *zombie_ptr = newZombie("RAFA");
	randomChump("JOJO");
	zombie_ptr->announce();
	delete zombie_ptr;
	return 0;
}