#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP
#include <string>
//#include "ICharacter.hpp"

//todo implement ICharacter, class depends on.
class AMateria
{
protected:
	std::string type;
public:
	AMateria();
	AMateria(const AMateria& inst);
	AMateria(const std::string& type);
	virtual ~AMateria() = 0;

	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	//virtual void use(ICharacter& target);



	AMateria& operator= (const AMateria& inst);
};


#endif //EX03_AMATERIA_HPP