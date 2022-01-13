#include "Character.hpp"

Character::Character() : name("undefined")
{
	for (int i = 0; i < MATERIA_ITEM_NUM; i++)
		materia_array[i] = nullptr;
}

Character::Character(const std::string& name) : name(name)
{
	for (int i = 0; i < MATERIA_ITEM_NUM; i++)
		materia_array[i] = nullptr;
}

Character::Character(const Character& inst) : name(inst.name)
{
	for (int i = 0; i < MATERIA_ITEM_NUM; i++)
		materia_array[i] = nullptr;
}

Character::~Character() {}

//OK
std::string const & Character::getName() const
{
	return name;
}

//todo
void Character::equip(AMateria *m) {}

//todo
void Character::unequip(int idx) {}

void Character::use(int idx, ICharacter& target)
{

}

Character& Character::operator= (const Character& inst)
{
	if (this == &inst)
		return *this;

	name = inst.name;
	for (int i = 0; i < MATERIA_ITEM_NUM; i++)
		materia_array[i] = inst.materia_array[i];
	return *this;
}
