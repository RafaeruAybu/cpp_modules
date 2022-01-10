#include "AMateria.hpp"

AMateria::AMateria() : type("undefined") {}

AMateria::AMateria(const std::string &type) : type(type) {}

AMateria::AMateria(const AMateria& inst) : type(inst.type) {}

std::string const & AMateria::getType() const
{
	return type;
}

//todo
//void use(ICharacter& target)
//{
//
//}

AMateria& AMateria::operator= (const AMateria& inst)
{
	if (this == &inst)
		return *this;

	type = inst.type;
	return *this;
}
