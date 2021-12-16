#include "Cat.h"

Cat::Cat() : Animal("Cat") {}

Cat::Cat(const Cat& p1) : Animal(p1.type) {}

Cat::Cat(std::string type) : Animal(type) {}

Cat::~Cat() {}

void Cat::makeSound() const
{
	std::cout << "Myaoo!" << std::endl;
}

Cat& Cat::operator=(const Cat& p1) { type = p1.type; return *this; }