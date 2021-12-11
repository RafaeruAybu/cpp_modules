#ifndef EX03_DIAMONDTRAP_H
#define EX03_DIAMONDTRAP_H
#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap : public virtual FragTrap, public virtual ScavTrap
{
public:
	DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap& p1);
	~DiamondTrap();
	DiamondTrap& operator= (const DiamondTrap& p1);
	void whoAmI();
	void attack(std::string const& target);
	const std::string &getName() const;

private:
	std::string m_name;
};

#endif //EX03_DIAMONDTRAP_H
