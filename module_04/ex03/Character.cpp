#include "Character.hpp"

Character::Character() : name("undefined") {}

Character::Character(const std::string& name) : name(name) {}

Character::Character(const Character& inst) : name(inst.name) {}

Character::~Character() {}

//OK
std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m) {}

void Character::unequip(int idx) {}

void Character::use(int idx, ICharacter& target) {}

Character& Character::operator= (const Character& inst)
{
	if (this == &inst)
		return *this;

	name = inst.name;
	return *this;
}
