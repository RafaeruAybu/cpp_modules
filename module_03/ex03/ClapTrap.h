#ifndef MODULE_03_CLAPTRAP_H
#define MODULE_03_CLAPTRAP_H
#include <string>
#include <iostream>
#include <limits>

#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define BLUE    "\x1b[34m"
#define RESET   "\x1b[0m"

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(const std::string name);
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
protected:
	ClapTrap(std::string name, unsigned int hitpoint,
			 unsigned int energy_point, unsigned int attack_damage);
	std::string		m_name;
	unsigned int	m_hitpoints;
	unsigned int	m_energy_points;
	unsigned int	m_attack_damage;
};

#endif //MODULE_03_CLAPTRAP_H
