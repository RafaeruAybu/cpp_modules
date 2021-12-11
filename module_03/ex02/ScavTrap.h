#ifndef MODULE_03_SCAVTRAP_H
#define MODULE_03_SCAVTRAP_H
#include <string>
#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& p1);
	~ScavTrap();
	ScavTrap& operator= (const ScavTrap& p1);
	void attack(std::string const& target);
	void guardGate();
};

#endif //MODULE_03_SCAVTRAP_H
