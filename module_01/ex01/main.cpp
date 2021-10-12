#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void) {
	int num_of_zombies = 7;
	ZombieHorde zombieHorde;
	Zombie *zmbi_ptr = zombieHorde.zombieHorde(num_of_zombies, "SUPER_HORDE");
	zombieHorde.announce();
	for (int i = 0; i < num_of_zombies; i++)
	{
		zmbi_ptr[i].announce();
	}
	delete [] zmbi_ptr;
	return 0;
}