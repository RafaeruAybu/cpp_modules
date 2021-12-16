#include "Dog.h"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called." << std::endl;
	brain = new Brain;
}

Dog::Dog(const Dog& p1) : Animal(p1.type)
{
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "GAV!" << std::endl;
}

Dog& Dog::operator=(const Dog& p1)
{
	if (this == &p1)
		return *this;
	type = p1.type;
	brain = p1.brain;
	return *this;
}