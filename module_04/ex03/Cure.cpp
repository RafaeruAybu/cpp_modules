#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const &other) : AMateria("cure") {}

Cure::~Cure() {}

AMateria * Cure::clone(void) const
{
    Cure* ret = new Cure(*this);
    return ret;
}

void Cure::use(ICharacter &target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Cure & Cure::operator=(Cure const &other)
{
    return *this;
}
