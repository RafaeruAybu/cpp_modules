#include "ClapTrap.h"

int main()
{
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