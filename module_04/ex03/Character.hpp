#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
public:
	Character(std::string const& name);
	Character(Character const& other);
	virtual ~Character();


	std::string const & getName(void) const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	Character & operator=(Character const& other);
private:
	Character();

	std::string name;
	int equipped;
	AMateria* inventory[4];
};

#endif
