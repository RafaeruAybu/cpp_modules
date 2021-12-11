#include "ClapTrap.h"
#include "ScavTrap.h"

int main()
{
	//TEST_0 from ex00
	{
		std::cout << "TEST_0:" << std::endl;

		ClapTrap undefinedTrap;
		undefinedTrap.attack("Cow");

		std::cout << std::endl;

		ClapTrap clapTrap("Trap1");
		clapTrap.attack("Chiken");
		clapTrap.takeDamage(10);
		clapTrap.beRepaired(15);

		std::cout << std::endl;

		ClapTrap ct2(clapTrap);
		ct2.attack("Duck");
		ct2.takeDamage(10);
		ct2.beRepaired(15);

		std::cout << std::endl;

		ClapTrap ct2Copy = ct2;
		ct2Copy.attack("Fish");
		ct2Copy.takeDamage(10);
		ct2Copy.beRepaired(15);
	}

	std::cout << std::endl;

	//TEST_1 default(no name)
	{
		std::cout << "TEST_1:" << std::endl;
		ScavTrap scav_trap;
	}

	std::cout << std::endl;

	//TEST_2 with name
	{
		std::cout << "TEST_2:" << std::endl;
		ScavTrap scav_trap("Delta");
		scav_trap.attack("Chicken");
	}

	std::cout << std::endl;

	//TEST_3 guardGate foo
	{
		std::cout << "TEST_3:" << std::endl;
		ScavTrap scav_trap("Omicron");
		scav_trap.guardGate();
	}

	std::cout << std::endl;

	//TEST_4 copy constructor
	{
		std::cout << "TEST_4:" << std::endl;
		ScavTrap scav_trap("Gamma");
		ScavTrap copy_trap;
		copy_trap = scav_trap;
		copy_trap.guardGate();
		copy_trap.attack("Chicken");
	}
}
