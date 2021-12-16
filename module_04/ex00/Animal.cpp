#include "Animal.h"

Animal::Animal() : type("Animal") {}

Animal::Animal(const std::string type) : type(type) {}

Animal::Animal(const Animal &p1) : type(p1.type) {}

Animal::~Animal() {}

std::string Animal::getType() const { return type; }

void Animal::makeSound() const
{
	std::cout << "Unrecogniseble sound..." << std::endl;
}

Animal &Animal::operator=(const Animal &p1) { type = p1.type; return *this; }