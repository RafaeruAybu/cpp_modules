#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP
# include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
	Ice(Ice const &other);
	virtual ~Ice();


	AMateria *clone(void) const;
	void use(ICharacter &target);
	Ice &operator=(Ice const &other);
};

#endif