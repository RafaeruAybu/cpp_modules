#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called." << std::endl;
	brain = new Brain;
}

Cat::Cat(const Cat& p1) : Animal(p1.type)
{
	std::cout << "Cat constructor called." << std::endl;
	brain = new Brain;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat constructor called." << std::endl;
	brain = new Brain;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Myaoo!" << std::endl;
}

//self assignment problem and dynamic assigment problem are solved
Cat& Cat::operator= (const Cat& p1)
{
	std::cout << "CAT Assignement op called" << std::endl;
	if (this == &p1)
		return *this;
	type = p1.type;
	//todo deep or shallow copy, fix this
	*brain = *p1.brain;
	return *this;
}

void Cat::print_brain() const
{
	for (int i = 0; i < NUM_OF_IDEAS; i++)
		std::cout << brain->get_idea(i) << std::endl;
}