#include "Zombie.hpp"

static std::string get_random_name()
{
	int i = 0;
	std::string nameList[] = {
			"RAFA",
			"JOJO",
			"DUPLE",
			"SaNYA",
			"JORDANO",
			"BRUNO",
			"OLEKSANRO"
	};
	i = rand() % sizeof(nameList) / 24;
	return (nameList[i]);
}

Zombie* zombieHorde(int N, std::string name) {
	Zombie *tmp_ptr = new Zombie[N];

	for (int i = 0; i < N; i++) {
		tmp_ptr[i].setName(get_random_name());
	}
	return tmp_ptr;
}