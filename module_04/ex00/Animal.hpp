#ifndef EX00_ANIMAL_H
#define EX00_ANIMAL_H
#include <string>
#include <iostream>

class Animal {
public:
	Animal();
	Animal(const std::string type);
	Animal(const Animal& p1);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;
	Animal& operator= (const Animal& p1);

protected:
	std::string type;
};


#endif //EX00_ANIMAL_H
