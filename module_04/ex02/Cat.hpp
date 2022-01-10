#ifndef EX00_CAT_H
#define EX00_CAT_H
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {
public:
	Cat();
	Cat(const Cat& p1);
	Cat(std::string type);
	~Cat();
	void print_brain() const;
	void makeSound() const;
	Cat& operator= (const Cat& p1);

private:
	Brain *brain;
};


#endif //EX00_CAT_H
