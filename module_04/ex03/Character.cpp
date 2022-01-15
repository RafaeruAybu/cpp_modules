#include "Character.hpp"

Character::Character(std::string const &name) : name(name), equipped(0)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = nullptr;
}

Character::Character(Character const &other) : name(other.name), equipped(0)
{
	for (int i = 0; i < other.equipped; i++)
		equip(other.inventory[i]->clone());
	for (int i = equipped; i < 4; i++)
		inventory[i] = nullptr;
}

Character::~Character()
{
	for (int i = 0; i < equipped; i++)
		delete inventory[i];
}


std::string const & Character::getName(void) const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (equipped == 4 || m == nullptr)
		return ;
	for (int i = 0; i < equipped; i++)
		if (inventory[i] == m)
			return ;
	inventory[equipped++] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= equipped || inventory[idx] == nullptr)
		return ;
	for (int i = idx; i < 3; i++)
	{
		inventory[i] = inventory[i + 1];
		inventory[i + 1] = nullptr;
	}
	equipped--;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= equipped || inventory[idx] == nullptr)
		return ;
	inventory[idx]->use(target);
}

Character & Character::operator=(Character const &other)
{
	name = other.name;
	for (int i = 0; i < equipped; i++)
		delete inventory[i];
	equipped = 0;
	for (int i = 0; i < other.equipped; i++)
		equip(other.inventory[i]->clone());
	for (int i = equipped; i < 4; i++)
		inventory[i] = nullptr;
	return *this;
}