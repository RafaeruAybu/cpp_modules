#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
	for (int x = 0; x < NUM_OF_IDEAS; x++)
		ideas[x] = std::to_string(x);
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain constructor called." << std::endl;
	for (int x = 0; x < NUM_OF_IDEAS; x++)
		ideas[x] = brain.ideas[x];
}

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

Brain& Brain::operator=(const Brain &brain)
{
	if (this == &brain)
		return *this;
	std::cout << "\"DEEP\" copying of ideas" << std::endl;
	for (int x = 0; x < NUM_OF_IDEAS; x++)
		ideas[x] = brain.ideas[x];
	return *this;
}

std::string Brain::get_idea(int i)
{
	return ideas[i];
}