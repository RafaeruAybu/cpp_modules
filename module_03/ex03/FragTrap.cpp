#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap("Undefined", 100, 100, 30)
{
	std::cout << "FragTrap default constructor is called." << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor is called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& p1) : ClapTrap(p1.m_name, p1.m_hitpoints,
												  p1.m_energy_points, p1.m_attack_damage)
{
	std::cout << "FragTrap copy constructor is called." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor is called." << std::endl;
}

FragTrap& FragTrap::operator= (const FragTrap& p1)
{
	std::cout << "FragTrap assignment operator is called." << std::endl;
	if (this == &p1)
		return *this;

	m_name = p1.m_name;
	m_attack_damage = p1.m_attack_damage;
	m_energy_points = p1.m_energy_points;
	m_attack_damage = p1.m_attack_damage;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "High five from " << m_name << "!" << std::endl;
}