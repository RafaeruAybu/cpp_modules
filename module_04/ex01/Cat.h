#ifndef EX00_CAT_H
#define EX00_CAT_H
#include <string>
#include "Animal.h"
#include "Brain.h"

class Cat : virtual public Animal {
public:
	Cat();
	Cat(const Cat& p1);
	Cat(std::string type);
	~Cat();
	void makeSound() const;
	Cat& operator= (const Cat& p1);

private:
	Brain *brain;
};


#endif //EX00_CAT_H
