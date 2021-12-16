#include "Animal.h"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const std::string type) : type(type)
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &p1) : type(p1.type)
{
	std::cout << "Animal constructor called." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

std::string Animal::getType() const { return type; }

void Animal::makeSound() const
{
	std::cout << "Unrecogniseble sound..." << std::endl;
}

Animal &Animal::operator=(const Animal &p1) { type = p1.type; return *this; }