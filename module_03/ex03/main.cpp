#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include "DiamondTrap.h"

int main()
{
	//TEST_1 Dimondtrap
	{
		std::cout << "TEST_1:" << std::endl;
		DiamondTrap d_trap("MARK1");
		std::cout << RED << "diamond: " << d_trap.getName() << RESET << std::endl;
		std::cout << RED << "clap: " << d_trap.ClapTrap::getName() << RESET << std::endl;
		DiamondTrap d_copy;
		d_copy = d_trap;
		std::cout << BLUE << "diamond: " << d_copy.getName() << RESET << std::endl;
		std::cout << BLUE << "clap: " << d_copy.ClapTrap::getName() << RESET << std::endl;
		std::cout << std::endl;
		d_copy.attack("Chiken");
	}
}
