#ifndef MODULE_03_CLAPTRAP_H
#define MODULE_03_CLAPTRAP_H
#include <string>
#include <iostream>
#include <limits>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& p1);
	~ClapTrap();
	ClapTrap& operator= (const ClapTrap& p1);
	void attack(std::string const& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName() const;
	unsigned int getHitpoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttack_damage() const;
private:
	std::string		m_name;
	unsigned int	m_hitpoints;
	unsigned int	m_energy_points;
	unsigned int	m_attack_damage;
};

#endif //MODULE_03_CLAPTRAP_H
