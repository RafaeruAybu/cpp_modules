#ifndef MODULE_01_EX05_KAREN_HPP
#define MODULE_01_EX05_KAREN_HPP

#include <string>
#include <iostream>

class Karen {
public:
	void complain(std::string level);
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif
