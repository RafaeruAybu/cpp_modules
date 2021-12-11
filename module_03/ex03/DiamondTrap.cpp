#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() :	ClapTrap("undefined_clap_name", 100, 50, 30),
								m_name("undefined")
{
	std::cout << "DiamondTrap default constructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) :	ClapTrap(name + "_clap_name", 100,
											50, 30), m_name(name)
{
	std::cout << "DiamondTrap constructor is called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& p1) : ClapTrap(p1.m_name, p1.m_hitpoints,
												  p1.m_energy_points, p1.m_attack_damage)
{
	std::cout << "DiamondTrap copy constructor is called." << std::endl;
	m_name = p1.m_name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor is called." << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& p1)
{
	std::cout << "FragTrap assignment operator is called." << std::endl;
	if (this == &p1)
		return *this;
	//DiamondTrap class members
	m_name = p1.m_name;
	//clapTrap class members
	ClapTrap::m_name = p1.ClapTrap::getName();
	m_attack_damage = p1.m_attack_damage;
	m_energy_points = p1.m_energy_points;
	m_attack_damage = p1.m_attack_damage;
	return *this;
}

const std::string &DiamondTrap::getName() const
{
	return m_name;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}