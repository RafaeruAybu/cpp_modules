#include <iostream>
#include "Cat.h"
#include "Dog.h"

int main()
{
	//TEST_0
	{
		std::cout << "TEST_0" << std::endl;
		Animal p;
		std::cout << p.getType() << std::endl;
		p.makeSound();
		Dog d;
		std::cout << d.getType() << std::endl;
		d.makeSound();
		Cat c;
		std::cout << c.getType() << std::endl;
		c.makeSound();
	}
	std::cout << std::endl;
	//TEST_1
	{
		std::cout << "TEST_1" << std::endl;
		const Animal* meta	= new Animal();
		const Animal* j		= new Dog();
		const Animal* i		= new Cat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	//TEST_2
	{
		std::cout << "TEST_1" << std::endl;
		const Animal* meta	= new Animal();
		const Animal* j		= new Dog();
		const Animal* i		= new Cat();
		meta->makeSound();
		j->makeSound();
		i->makeSound();
	}
	return 0;
}