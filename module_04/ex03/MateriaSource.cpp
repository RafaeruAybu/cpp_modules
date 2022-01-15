#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : amount(0)
{
	for (int i = 0; i < 4; i++)
		sources[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &other) : amount(0)
{
	for (int i = 0; i < other.amount; i++)
		learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		sources[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < amount; i++)
		delete sources[i];
}


void MateriaSource::learnMateria(AMateria *m)
{
	if (amount  == 4 || m == nullptr)
		return ;
	for (int i = 0; i < amount; i++)
		if (sources[i] == m)
			return ;
	sources[amount++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < amount; i++)
		if (sources[i]->getType() == type)
			return (sources[i]->clone());
	return nullptr;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < amount; i++)
		delete sources[i];
	amount = 0;
	for (int i = 0; i < other.amount; i++)
		learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		sources[i] = nullptr;
	return *this;
}
