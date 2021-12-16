#include "Dog.h"

Dog::Dog() : Animal("Dog") {}

Dog::Dog(const Dog& p1) : Animal(p1.type) {}

Dog::Dog(std::string type) : Animal(type) {}

Dog::~Dog() {}

void Dog::makeSound() const
{
	std::cout << "GAV!" << std::endl;
}

Dog& Dog::operator=(const Dog& p1) { type = p1.type; return *this; }