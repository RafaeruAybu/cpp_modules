#ifndef MODULE_04_BRAIN_H
#define MODULE_04_BRAIN_H
#include <string>
#include <iostream>

#define NUM_OF_IDEAS 100

class Brain {
public:
	Brain();
	Brain(const Brain& brain);
	~Brain();
	std::string get_idea(int i);
	Brain& operator= (const Brain& brain);
private:
	std::string ideas[NUM_OF_IDEAS];
};

#endif //MODULE_04_BRAIN_H
