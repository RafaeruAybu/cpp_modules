#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(Ice const &other) : AMateria("ice") {}

Ice::~Ice() {}

Ice &Ice::operator=(Ice const &other)
{
	return *this;
}

AMateria *Ice::clone(void) const
{
	Ice *ret = new Ice(*this);
	return ret;
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
