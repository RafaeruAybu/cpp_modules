#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP
#include <string>
#include "AMateria.hpp"		//to be able to equip
#include "ICharacter.hpp"	//inherited from

#define MATERIA_ITEM_NUM 4

//todo implement
class Character : public ICharacter
{
public:
	Character();
	Character(const std::string& name);
	Character(const Character& inst);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	Character& operator= (const Character& inst);

private:
	std::string name;
	AMateria* materia_array[MATERIA_ITEM_NUM]; //inventory
};

#endif //EX03_CHARACTER_HPP
