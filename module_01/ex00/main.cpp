#include "Zombie.hpp"

int main(void) {
	Zombie *zombie_ptr = newZombie("RAFA");
	randomChump("JOJO");
	delete zombie_ptr;
	return 0;
}