#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP

#include <iostream>
#include <string>

class AMateria;
#include "ICharacter.hpp"

class AMateria
{
public:
	AMateria(std::string const &type);
	virtual ~AMateria();

	std::string const & getType(void) const;
	virtual AMateria * clone(void) const = 0;
	virtual void use(ICharacter &target);
protected:
	std::string type;
private:
	AMateria();
};

#endif