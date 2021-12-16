#ifndef EX00_DOG_H
#define EX00_DOG_H
#include <string>
#include "Animal.h"

class Dog : virtual public Animal {
public:
	Dog();
	Dog(const Dog& p1);
	Dog(std::string type);
	~Dog();
	void makeSound() const;
	Dog& operator= (const Dog& p1);

private:

};


#endif //EX00_DOG_H
