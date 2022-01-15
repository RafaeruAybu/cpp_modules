#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &other);
	virtual ~Cure();


	AMateria *clone(void) const;
	void use(ICharacter &target);
	Cure &operator=(Cure const &other);
};

#endif