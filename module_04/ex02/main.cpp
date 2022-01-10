#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//TEST_0 constructor and destructor
	{
		std::cout << "TEST_0" << std::endl;
		const Animal* j = new Dog;
		delete j;
	}
	std::cout << std::endl;

	//TEST_1 half cat half dog arrays
	{
		std::cout << "TEST_1" << std::endl;
		int num_of_anim_array = 4;
		//alloc
		Animal *anim_array[num_of_anim_array];
		for (int i = 0; i < 2; i++)
			anim_array[i] = new Dog;
		for (int i = 2; i < 4; i++)
			anim_array[i] = new Cat;
		//delete
		for (int i = 0; i < 2; i++)
			delete anim_array[i];
		for (int i = 2; i < 4; i++)
			delete anim_array[i];
	}
	std::cout << std::endl;

	//TEST_2 deep copy test
	{
		std::cout << "TEST_2" << std::endl;
		Cat* cat = new Cat;
		Cat* cat2 = new Cat("cat2");

		//assignment operator
		*cat = *cat2;
		delete cat2;
		cat->print_brain();

		delete cat;
	}
	return 0;
}
