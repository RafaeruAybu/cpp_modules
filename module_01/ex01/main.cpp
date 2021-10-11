#include "Zombie.hpp"

int main(void) {
	int num_of_zombies = 5;
	Zombie *zombie_ptr = zombieHorde(num_of_zombies, "Undefined");
	for (int i = 0; i < num_of_zombies; i++)
	{
		zombie_ptr[i].announce();
	}
	delete zombie_ptr;
	return 0;
}