#include "ClapTrap.h"

ClapTrap::ClapTrap() : m_name("Undefined"), m_hitpoints(10), m_energy_points(10), m_attack_damage(0)
{
	std::cout << "ClapTrap default constructor is called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : m_name(name), m_hitpoints(10),
	m_energy_points(10), m_attack_damage(0)
{
	std::cout << "ClapTrap constructor is called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& p1) : m_name(p1.m_name), m_hitpoints(p1.m_hitpoints),
	m_energy_points(p1.m_energy_points), m_attack_damage(p1.m_attack_damage)
{
	std::cout << "ClapTrap copy constructor is called." << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitpoint,
	unsigned int energy_point, unsigned int attack_damage) :
	m_name(name), m_hitpoints(hitpoint),
	m_energy_points(energy_point), m_attack_damage(attack_damage)
{
	std::cout << "ClapTrap constructor is called." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor is called." << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& p1)
{
	std::cout << "ClapTrap assignment operator is called." << std::endl;
	if (this == &p1)
		return *this;

	m_name = p1.getName();
	m_hitpoints = p1.getHitpoints();
	m_energy_points = p1.getEnergyPoints();
	m_attack_damage = p1.getAttack_damage();
	return *this;
}

void ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << m_name << " attack " << target
		<< ", causing " << m_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= m_hitpoints)
		m_hitpoints = 0;
	else
		m_hitpoints -= amount;
	std::cout << "ClapTrap " << m_name << " took " << amount << " damage" << "!" << std::endl;
	std::cout << "ClapTrap " << m_name << " have " << m_hitpoints << " hitpoints" << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((m_hitpoints + amount) < m_hitpoints)
		m_hitpoints = UINT32_MAX;
	else
		m_hitpoints += amount;
	std::cout << "ClapTrap " << m_name << " got repaired by " << amount << " points!" << std::endl;
	std::cout << "ClapTrap " << m_name << " have " << m_hitpoints << " hitpoints" << "." << std::endl;
}

std::string ClapTrap::getName() const { return m_name; }

unsigned int ClapTrap::getHitpoints() const { return m_hitpoints; }

unsigned int ClapTrap::getEnergyPoints() const { return m_energy_points; }

unsigned int ClapTrap::getAttack_damage() const { return m_attack_damage; }
