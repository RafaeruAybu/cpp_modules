#ifndef MODULE_03_FRAGTRAP_H
#define MODULE_03_FRAGTRAP_H
#include "ClapTrap.h"

class FragTrap : public virtual ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &p1);
	~FragTrap();
	FragTrap& operator=(const FragTrap &p1);
	void highFivesGuys(void);
};


#endif //MODULE_03_FRAGTRAP_H
