#include "ScavTrap.h"

ScavTrap::ScavTrap() : ClapTrap("Undefined", 100, 50, 20)
{
	std::cout << "ScavTrap default constructor is called." << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name, 100, 50, 20)
{
		std::cout << "ScavTrap constructor is called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& p1) : ClapTrap(p1.m_name, p1.m_hitpoints,
												  p1.m_energy_points, p1.m_attack_damage)
{
	std::cout << "ScavTrap copy constructor is called." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor is called." << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& p1)
{
	std::cout << "ScavTrap assignment operator is called." << std::endl;
	if (this == &p1)
		return *this;

	m_name = p1.m_name;
	m_attack_damage = p1.m_attack_damage;
	m_energy_points = p1.m_energy_points;
	m_attack_damage = p1.m_attack_damage;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << m_name << " have enterred in Gate keeper mode!" << std::endl;
}
