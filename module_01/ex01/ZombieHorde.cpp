#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde() {

}
ZombieHorde::~ZombieHorde() {
	std::cout << _horde_name << " horde is destructed" << std::endl;
}

void ZombieHorde::announce() {
	std::cout << _horde_name << " " << "are coming!!!" << std::endl;
}

static std::string get_random_name()
{
	int i;
	std::string list_name[] = {
			"RAFA",
			"JOJO",
			"ACAB",
			"AVA",
			"SANYA",
			"LLOLO",
			"LULU"
	};
	i = rand() % sizeof(list_name) / 24;
	return list_name[i];
}

Zombie *ZombieHorde::zombieHorde(int N, std::string name) {
	_horde_name = name;
	Zombie *tmp_ptr = new Zombie[N];
	for (int i = 0; i < N; i++)
		tmp_ptr[i].set_name(get_random_name());
	return tmp_ptr;
}