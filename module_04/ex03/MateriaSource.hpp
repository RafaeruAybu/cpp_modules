#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	MateriaSource(MateriaSource const &other);
	virtual ~MateriaSource();


	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const &type);
	MateriaSource &operator=(MateriaSource const &other);
private:
	int amount;
	AMateria *sources[4];
};

#endif
